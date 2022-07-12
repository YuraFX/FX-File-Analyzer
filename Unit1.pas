//  Foobar is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  Foobar is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms, System.IO, System.Security.Cryptography, Unit2, Unit3;

type
  Form1 = class(Form)
    procedure toolStripMenuItem3_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem4_Click(sender: Object; e: EventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem7_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem8_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem5_Click(sender: Object; e: EventArgs);
    procedure aboutTheProgramToolStripMenuItem_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource Unit1.Form1.resources}
    menuStrip1: MenuStrip;
    toolStripMenuItem1: ToolStripMenuItem;
    toolStripMenuItem3: ToolStripMenuItem;
    toolStripMenuItem4: ToolStripMenuItem;
    toolStripMenuItem2: ToolStripMenuItem;
    toolStripMenuItem6: ToolStripMenuItem;
    toolStripMenuItem7: ToolStripMenuItem;
    toolStripMenuItem8: ToolStripMenuItem;
    Block2: PictureBox;
    pictureBox1: PictureBox;
    Logo1: PictureBox;
    tbFile: TextBox;
    label1: &Label;
    lblFileName: &Label;
    Label3: &Label;
    button1: Button;
    openFileDialog1: OpenFileDialog;
    pb1: PictureBox;
    pb2: PictureBox;
    label4: &Label;
    aboutTheProgramToolStripMenuItem: ToolStripMenuItem;
    Block1: PictureBox;
    lblFileSize: &Label;
    lblMD5: &Label;
    lblName: &Label;
    lblSize: &Label;
    lblHash: &Label;
    toolStripMenuItem5: ToolStripMenuItem;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

  function GetMD5FromFile(filePath:string):string;                 // 
begin                                                              // Создание алгоритма считывания 
  var md5 := MD5.Create();                                         // контрольной суммы файла (MD5).
  var stream := System.IO .File.OpenRead(filePath);                //
  GetMD5FromFile := BitConverter.ToString(md5.ComputeHash(stream));//
end;

procedure Form1.toolStripMenuItem3_Click(sender: Object; e: EventArgs); // Нажатие на кнопку "Открыть...".
begin
  var fio:=new FileInfo(OpenFileDialog1.FileName);                    // 
  OpenFileDialog1.ShowDialog;                                         // Появление окна открывания файла и 
  tbFile.Text:=OpenFileDialog1.FileName;                              // копирование на Text Box путь, 
  lblHash.Text:=GetMD5FromFile(OpenFileDialog1.FileName);             // хэш-сумму открываемого файла, а также 
  lblName.Text:=OpenFileDialog1.SafeFileName;                         // имя и размер файла.
  lblSize.Text:=fio.Length.ToString();                                //
  //////////////////////////////////////////////////////////////////////
  Label3.Text:='Результат:';                                          // Текст Label3 = Статус: (Rus язык).
  Label4.Text:='Result:';                                             // Текст Label4 = Status: (Eng язык).
  Label3.ForeColor:=System.Drawing.Color.White;                       // Цвет Label3 = Белый (Rus язык).
  Label4.ForeColor:=System.Drawing.Color.White;                       // Цвет Label4 = Белый (Eng язык).
  //////////////////////////////////////////////////////////////////////
  if tbFile.Text='Файл' then                                          // 
    tbFile.Clear                                                      // Очистка tbFile при условии, если
  else                                                                // его текст = 'Файл'. 
    pb1.Visible:=false;                                               //
  //////////////////////////////////////////////////////////////////////
  if tbFile.Text='File' then                                          //
    tbFile.Clear                                                      // Очистка tbFile при условии, если
  else                                                                // его текст = 'File'.
    pb1.Visible:=false;                                               //
  //////////////////////////////////////////////////////////////////////
  if lblName.Text='Файл' then                                        //
    lblName.Text:=''                                                  // Очистка lblName при условии, если
  else                                                                // его текст = 'Файл'.
    pb1.Visible:=false;                                               //
  //////////////////////////////////////////////////////////////////////
  if lblName.Text='File' then                                         //
    lblName.Text:=''                                                  // Очистка lblName при условии, если
  else                                                                // его текст = 'File'.
    pb1.Visible:=false;                                               //
  //////////////////////////////////////////////////////////////////////
  if lblSize.Text='134' then                                          //
    lblSize.Text:=''                                                  // Очистка lblSize при условии, если
  else                                                                // его текст = 'Файл'.
    pb1.Visible:=false;                                               //
  //////////////////////////////////////////////////////////////////////
  if lblSize.Text='134' then                                          //
    lblSize.Text:=''                                                  // Очистка lblSize при условии, если
  else                                                                // его текст = 'File'.
    pb1.Visible:=false;                                               //
  //////////////////////////////////////////////////////////////////////
  if lblHash.Text='0A-10-EA-9B-DE-30-21-49-6A-42-A5-50-56-6A-7D-4D' then//
    lblHash.Text:=''                                                  // Очистка lblHash при условии, если
  else                                                                // его текст = '0A-10-EA-9B-DE-30-21-49-6A-42-A5-50-56-6A-7D-4D'.
    pb1.Visible:=false;                                               //
end;

procedure Form1.toolStripMenuItem4_Click(sender: Object; e: EventArgs);
begin
  Close;                                                     // Закрытие программы при нажатии на кнопку "Выход".
end;

procedure Form1.button1_Click(sender: Object; e: EventArgs); // Нажатие на кнопку "Сканировать файл".
begin
  var md5signatures:=ReadAllLines('MD5Base.txt');  // Считывание данных с MD5Base.txt.
  ///////////////////////////////////////////////////
  if md5signatures.Contains(lblHash.Text) then     //
    Label3.Text:='Результат: заражён!'             // Если данные из MD5Base.txt соответствуют данным  
  else                                             // на lblHash, то выводится одно из двух сообщений. (Rus язык)
    Label3.Text:='Результат: не заражён';          // 
  ///////////////////////////////////////////////////
  if md5signatures.Contains(lblHash.Text) then     //
    Label4.Text:='Result: Infected!'               // Если данные из MD5Base.txt соответствуют данным 
  else                                             // на lblHash, то выводится одно из двух сообщений. (Eng язык)
    Label4.Text:='Result: not infected';           //
  ///////////////////////////////////////////////////
  if md5signatures.Contains(lblHash.Text) then     //
    Label3.ForeColor:=System.Drawing.Color.Red     // Если данные из MD5Base.txt соответствуют данным на lblHash,то 
  else                                             // цвет Label3 меняется на Красный или Зелёный. (Rus язык)
    Label3.ForeColor:=System.Drawing.Color.Green;  //
  ///////////////////////////////////////////////////
  if md5signatures.Contains(lblHash.Text) then     //
    Label4.ForeColor:=System.Drawing.Color.Red     // Если данные из MD5Base.txt соответствуют данным на lblHash,то 
  else                                             // цвет Label3 меняется на Красный или Зелёный. (Eng язык)
    Label4.ForeColor:=System.Drawing.Color.Green;  //
  ///////////////////////////////////////////////////
  if lblHash.Text='' then                          //
    Label3.Text:='Результат:'                      // Если lblHash пустое, то Label3 = 'Результат:'. (Rus язык)
  else                                             //
    pb1.Visible:=false;                            //
  ///////////////////////////////////////////////////
  if lblHash.Text='' then                          //
    Label4.Text:='Result:'                         // Если lblHash пустое, то Label4 = 'Result:'. (Eng язык)
  else                                             //
    pb1.Visible:=false;                            //
  ///////////////////////////////////////////////////
  if lblHash.Text='' then                          //
    Label3.ForeColor:=System.Drawing.Color.White   // Если lblHash пустое, то цвет Label3 = Белый. (Rus язык)
  else                                             //
    pb1.Visible:=false;                            //
  ///////////////////////////////////////////////////
  if lblHash.Text='' then                          //
    Label4.ForeColor:=System.Drawing.Color.White   // Если lblHash пустое, то цвет Label4 = Белый. (Eng язык)
  else                                             //
    pb1.Visible:=false;                            //
end;                                               

procedure Form1.toolStripMenuItem7_Click(sender: Object; e: EventArgs); 
begin
  Label4.Visible:=true;                            // Смена языка на Английский.
  aboutTheProgramToolStripMenuItem.Visible:=true;  //
  toolStripMenuItem5.Visible:=false;               //
  pb2.Visible:=true;                               //
  ///////////////////////////////////////////////////
  toolStripMenuItem1.Text:='File';                 //
  toolStripMenuItem2.Text:='Other';                //
  toolStripMenuItem3.Text:='Open...';              //
  toolStripMenuItem4.Text:='Exit';                 //
  toolStripMenuItem6.Text:='Language';             //
  toolStripMenuItem7.Text:='English';              //
  toolStripMenuItem8.Text:='Russian';              //
  Label1.Text:='Path of the checked file:';        //
  lblFileName.Text:='File name:';                  //
  lblFileSize.Text:='File size:';                  // 
  Button1.Text:='Scan file';                       //
  openFileDialog1.FileName:='File';                //
end;

procedure Form1.toolStripMenuItem8_Click(sender: Object; e: EventArgs);
begin
  Label4.Visible:=false;                           // Смена языка на Русский.
  aboutTheProgramToolStripMenuItem.Visible:=false; //
  toolStripMenuItem5.Visible:=true;                //
  pb2.Visible:=false;                              //
  ///////////////////////////////////////////////////
  toolStripMenuItem1.Text:='Файл';                 //
  toolStripMenuItem2.Text:='Прочее';               //
  toolStripMenuItem3.Text:='Открыть...';           //
  toolStripMenuItem4.Text:='Выход';                //
  toolStripMenuItem6.Text:='Язык';                 //
  toolStripMenuItem7.Text:='Английский';           //
  toolStripMenuItem8.Text:='Русский';              //
  Label1.Text:='Путь проверяемого файла:';         //
  lblFileName.Text:='Имя файла:';                  //
  lblFileSize.Text:='Размер файла:';               // 
  Button1.Text:='Сканировать файл';                //
  openFileDialog1.FileName:='Файл';                //
end;

procedure Form1.toolStripMenuItem5_Click(sender: Object; e: EventArgs);
begin
  Form(new Form2).Show;                            // Открытие Form 2 при нажатии на кнопку "О программе".
end;

procedure Form1.aboutTheProgramToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  Form(new Form3).Show;                            // Открытие Form 3 при нажатии на кнопку "About the program".
end;

end.
