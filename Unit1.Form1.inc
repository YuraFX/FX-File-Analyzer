procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(Form1));
        self.menuStrip1 := new System.Windows.Forms.MenuStrip();
        self.toolStripMenuItem1 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem3 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem4 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem2 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem6 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem7 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem8 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem5 := new System.Windows.Forms.ToolStripMenuItem();
        self.aboutTheProgramToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.Block2 := new System.Windows.Forms.PictureBox();
        self.pictureBox1 := new System.Windows.Forms.PictureBox();
        self.Logo1 := new System.Windows.Forms.PictureBox();
        self.tbFile := new System.Windows.Forms.TextBox();
        self.label1 := new System.Windows.Forms.Label();
        self.lblFileName := new System.Windows.Forms.Label();
        self.Label3 := new System.Windows.Forms.Label();
        self.button1 := new System.Windows.Forms.Button();
        self.openFileDialog1 := new System.Windows.Forms.OpenFileDialog();
        self.pb1 := new System.Windows.Forms.PictureBox();
        self.pb2 := new System.Windows.Forms.PictureBox();
        self.label4 := new System.Windows.Forms.Label();
        self.Block1 := new System.Windows.Forms.PictureBox();
        self.lblFileSize := new System.Windows.Forms.Label();
        self.lblMD5 := new System.Windows.Forms.Label();
        self.lblName := new System.Windows.Forms.Label();
        self.lblSize := new System.Windows.Forms.Label();
        self.lblHash := new System.Windows.Forms.Label();
        self.lblNameEng := new System.Windows.Forms.Label();
        self.lblSizeEng := new System.Windows.Forms.Label();
        self.menuStrip1.SuspendLayout();
        (System.ComponentModel.ISupportInitialize(self.Block2)).BeginInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).BeginInit();
        (System.ComponentModel.ISupportInitialize(self.Logo1)).BeginInit();
        (System.ComponentModel.ISupportInitialize(self.pb1)).BeginInit();
        (System.ComponentModel.ISupportInitialize(self.pb2)).BeginInit();
        (System.ComponentModel.ISupportInitialize(self.Block1)).BeginInit();
        self.SuspendLayout();
        // 
        // menuStrip1
        // 
        self.menuStrip1.BackColor := System.Drawing.SystemColors.ControlDarkDark;
        self.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[4](self.toolStripMenuItem1, self.toolStripMenuItem2, self.toolStripMenuItem5, self.aboutTheProgramToolStripMenuItem));
        self.menuStrip1.Location := new System.Drawing.Point(0, 0);
        self.menuStrip1.Name := 'menuStrip1';
        self.menuStrip1.Size := new System.Drawing.Size(506, 24);
        self.menuStrip1.TabIndex := 0;
        self.menuStrip1.Text := 'menuStrip1';
        // 
        // toolStripMenuItem1
        // 
        self.toolStripMenuItem1.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[2](self.toolStripMenuItem3, self.toolStripMenuItem4));
        self.toolStripMenuItem1.ForeColor := System.Drawing.Color.White;
        self.toolStripMenuItem1.Name := 'toolStripMenuItem1';
        self.toolStripMenuItem1.Size := new System.Drawing.Size(48, 20);
        self.toolStripMenuItem1.Text := 'Файл';
        // 
        // toolStripMenuItem3
        // 
        self.toolStripMenuItem3.BackColor := System.Drawing.SystemColors.ControlDarkDark;
        self.toolStripMenuItem3.ForeColor := System.Drawing.Color.White;
        self.toolStripMenuItem3.Image := (System.Drawing.Image(resources.GetObject('toolStripMenuItem3.Image')));
        self.toolStripMenuItem3.Name := 'toolStripMenuItem3';
        self.toolStripMenuItem3.Size := new System.Drawing.Size(130, 22);
        self.toolStripMenuItem3.Text := 'Открыть...';
        self.toolStripMenuItem3.Click += toolStripMenuItem3_Click;
        // 
        // toolStripMenuItem4
        // 
        self.toolStripMenuItem4.BackColor := System.Drawing.SystemColors.ControlDarkDark;
        self.toolStripMenuItem4.ForeColor := System.Drawing.Color.White;
        self.toolStripMenuItem4.Image := (System.Drawing.Image(resources.GetObject('toolStripMenuItem4.Image')));
        self.toolStripMenuItem4.Name := 'toolStripMenuItem4';
        self.toolStripMenuItem4.Size := new System.Drawing.Size(130, 22);
        self.toolStripMenuItem4.Text := 'Выход';
        self.toolStripMenuItem4.Click += toolStripMenuItem4_Click;
        // 
        // toolStripMenuItem2
        // 
        self.toolStripMenuItem2.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[1](self.toolStripMenuItem6));
        self.toolStripMenuItem2.ForeColor := System.Drawing.Color.White;
        self.toolStripMenuItem2.Name := 'toolStripMenuItem2';
        self.toolStripMenuItem2.Size := new System.Drawing.Size(61, 20);
        self.toolStripMenuItem2.Text := 'Прочее';
        // 
        // toolStripMenuItem6
        // 
        self.toolStripMenuItem6.BackColor := System.Drawing.SystemColors.ControlDarkDark;
        self.toolStripMenuItem6.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[2](self.toolStripMenuItem7, self.toolStripMenuItem8));
        self.toolStripMenuItem6.ForeColor := System.Drawing.Color.White;
        self.toolStripMenuItem6.Image := (System.Drawing.Image(resources.GetObject('toolStripMenuItem6.Image')));
        self.toolStripMenuItem6.Name := 'toolStripMenuItem6';
        self.toolStripMenuItem6.Size := new System.Drawing.Size(101, 22);
        self.toolStripMenuItem6.Text := 'Язык';
        // 
        // toolStripMenuItem7
        // 
        self.toolStripMenuItem7.BackColor := System.Drawing.SystemColors.ControlDarkDark;
        self.toolStripMenuItem7.ForeColor := System.Drawing.Color.White;
        self.toolStripMenuItem7.Image := (System.Drawing.Image(resources.GetObject('toolStripMenuItem7.Image')));
        self.toolStripMenuItem7.Name := 'toolStripMenuItem7';
        self.toolStripMenuItem7.Size := new System.Drawing.Size(141, 22);
        self.toolStripMenuItem7.Text := 'Английский';
        self.toolStripMenuItem7.Click += toolStripMenuItem7_Click;
        // 
        // toolStripMenuItem8
        // 
        self.toolStripMenuItem8.BackColor := System.Drawing.SystemColors.ControlDarkDark;
        self.toolStripMenuItem8.ForeColor := System.Drawing.Color.White;
        self.toolStripMenuItem8.Image := (System.Drawing.Image(resources.GetObject('toolStripMenuItem8.Image')));
        self.toolStripMenuItem8.Name := 'toolStripMenuItem8';
        self.toolStripMenuItem8.Size := new System.Drawing.Size(141, 22);
        self.toolStripMenuItem8.Text := 'Русский';
        self.toolStripMenuItem8.Click += toolStripMenuItem8_Click;
        // 
        // toolStripMenuItem5
        // 
        self.toolStripMenuItem5.ForeColor := System.Drawing.Color.White;
        self.toolStripMenuItem5.Name := 'toolStripMenuItem5';
        self.toolStripMenuItem5.Size := new System.Drawing.Size(94, 20);
        self.toolStripMenuItem5.Text := 'О программе';
        self.toolStripMenuItem5.Click += toolStripMenuItem5_Click;
        // 
        // aboutTheProgramToolStripMenuItem
        // 
        self.aboutTheProgramToolStripMenuItem.ForeColor := System.Drawing.Color.White;
        self.aboutTheProgramToolStripMenuItem.Name := 'aboutTheProgramToolStripMenuItem';
        self.aboutTheProgramToolStripMenuItem.Size := new System.Drawing.Size(121, 20);
        self.aboutTheProgramToolStripMenuItem.Text := 'About the program';
        self.aboutTheProgramToolStripMenuItem.Visible := false;
        self.aboutTheProgramToolStripMenuItem.Click += aboutTheProgramToolStripMenuItem_Click;
        // 
        // Block2
        // 
        self.Block2.BackColor := System.Drawing.SystemColors.ControlDarkDark;
        self.Block2.Location := new System.Drawing.Point(496, 12);
        self.Block2.Name := 'Block2';
        self.Block2.Size := new System.Drawing.Size(10, 277);
        self.Block2.TabIndex := 2;
        self.Block2.TabStop := false;
        // 
        // pictureBox1
        // 
        self.pictureBox1.BackColor := System.Drawing.SystemColors.ControlDarkDark;
        self.pictureBox1.Location := new System.Drawing.Point(0, 269);
        self.pictureBox1.Name := 'pictureBox1';
        self.pictureBox1.Size := new System.Drawing.Size(506, 10);
        self.pictureBox1.TabIndex := 3;
        self.pictureBox1.TabStop := false;
        // 
        // Logo1
        // 
        self.Logo1.Image := (System.Drawing.Image(resources.GetObject('Logo1.Image')));
        self.Logo1.Location := new System.Drawing.Point(88, 23);
        self.Logo1.Name := 'Logo1';
        self.Logo1.Size := new System.Drawing.Size(331, 80);
        self.Logo1.SizeMode := System.Windows.Forms.PictureBoxSizeMode.StretchImage;
        self.Logo1.TabIndex := 4;
        self.Logo1.TabStop := false;
        // 
        // tbFile
        // 
        self.tbFile.BackColor := System.Drawing.SystemColors.ControlDarkDark;
        self.tbFile.ForeColor := System.Drawing.Color.White;
        self.tbFile.Location := new System.Drawing.Point(16, 120);
        self.tbFile.Name := 'tbFile';
        self.tbFile.Size := new System.Drawing.Size(474, 20);
        self.tbFile.TabIndex := 5;
        // 
        // label1
        // 
        self.label1.Font := new System.Drawing.Font('Microsoft Sans Serif', 9.75, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label1.ForeColor := System.Drawing.Color.White;
        self.label1.Location := new System.Drawing.Point(14, 94);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(225, 23);
        self.label1.TabIndex := 7;
        self.label1.Text := 'Путь проверяемого файла:';
        self.label1.TextAlign := System.Drawing.ContentAlignment.BottomLeft;
        // 
        // lblFileName
        // 
        self.lblFileName.Font := new System.Drawing.Font('Microsoft Sans Serif', 9.75, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.lblFileName.ForeColor := System.Drawing.Color.White;
        self.lblFileName.Location := new System.Drawing.Point(14, 147);
        self.lblFileName.Name := 'lblFileName';
        self.lblFileName.Size := new System.Drawing.Size(107, 23);
        self.lblFileName.TabIndex := 8;
        self.lblFileName.Text := 'Имя файла:';
        self.lblFileName.TextAlign := System.Drawing.ContentAlignment.MiddleLeft;
        // 
        // Label3
        // 
        self.Label3.Font := new System.Drawing.Font('Microsoft Sans Serif', 9.75, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.Label3.ForeColor := System.Drawing.Color.White;
        self.Label3.Location := new System.Drawing.Point(14, 211);
        self.Label3.Name := 'Label3';
        self.Label3.Size := new System.Drawing.Size(240, 23);
        self.Label3.TabIndex := 9;
        self.Label3.Text := 'Результат:';
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(350, 231);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(140, 32);
        self.button1.TabIndex := 10;
        self.button1.Text := 'Сканировать файл';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // openFileDialog1
        // 
        self.openFileDialog1.FileName := 'Файл';
        // 
        // pb1
        // 
        self.pb1.BackColor := System.Drawing.Color.Red;
        self.pb1.Location := new System.Drawing.Point(469, 27);
        self.pb1.Name := 'pb1';
        self.pb1.Size := new System.Drawing.Size(21, 24);
        self.pb1.TabIndex := 11;
        self.pb1.TabStop := false;
        self.pb1.Visible := false;
        // 
        // pb2
        // 
        self.pb2.BackColor := System.Drawing.Color.DarkGray;
        self.pb2.Location := new System.Drawing.Point(442, 27);
        self.pb2.Name := 'pb2';
        self.pb2.Size := new System.Drawing.Size(21, 24);
        self.pb2.TabIndex := 12;
        self.pb2.TabStop := false;
        self.pb2.Visible := false;
        // 
        // label4
        // 
        self.label4.Font := new System.Drawing.Font('Microsoft Sans Serif', 9.75, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label4.ForeColor := System.Drawing.Color.White;
        self.label4.Location := new System.Drawing.Point(14, 211);
        self.label4.Name := 'label4';
        self.label4.Size := new System.Drawing.Size(223, 23);
        self.label4.TabIndex := 13;
        self.label4.Text := 'Result:';
        self.label4.Visible := false;
        // 
        // Block1
        // 
        self.Block1.BackColor := System.Drawing.SystemColors.ControlDarkDark;
        self.Block1.Location := new System.Drawing.Point(0, 18);
        self.Block1.Name := 'Block1';
        self.Block1.Size := new System.Drawing.Size(10, 277);
        self.Block1.TabIndex := 14;
        self.Block1.TabStop := false;
        // 
        // lblFileSize
        // 
        self.lblFileSize.Font := new System.Drawing.Font('Microsoft Sans Serif', 9.75, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.lblFileSize.ForeColor := System.Drawing.Color.White;
        self.lblFileSize.Location := new System.Drawing.Point(14, 168);
        self.lblFileSize.Name := 'lblFileSize';
        self.lblFileSize.Size := new System.Drawing.Size(107, 23);
        self.lblFileSize.TabIndex := 15;
        self.lblFileSize.Text := 'Размер файла:';
        self.lblFileSize.TextAlign := System.Drawing.ContentAlignment.MiddleLeft;
        // 
        // lblMD5
        // 
        self.lblMD5.Font := new System.Drawing.Font('Microsoft Sans Serif', 9.75, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.lblMD5.ForeColor := System.Drawing.Color.White;
        self.lblMD5.Location := new System.Drawing.Point(14, 189);
        self.lblMD5.Name := 'lblMD5';
        self.lblMD5.Size := new System.Drawing.Size(40, 23);
        self.lblMD5.TabIndex := 16;
        self.lblMD5.Text := 'MD5:';
        self.lblMD5.TextAlign := System.Drawing.ContentAlignment.MiddleLeft;
        // 
        // lblName
        // 
        self.lblName.Font := new System.Drawing.Font('Microsoft Sans Serif', 9.75, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.lblName.ForeColor := System.Drawing.Color.White;
        self.lblName.Location := new System.Drawing.Point(105, 147);
        self.lblName.Name := 'lblName';
        self.lblName.Size := new System.Drawing.Size(385, 23);
        self.lblName.TabIndex := 17;
        self.lblName.TextAlign := System.Drawing.ContentAlignment.MiddleLeft;
        // 
        // lblSize
        // 
        self.lblSize.Font := new System.Drawing.Font('Microsoft Sans Serif', 9.75, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.lblSize.ForeColor := System.Drawing.Color.White;
        self.lblSize.Location := new System.Drawing.Point(119, 168);
        self.lblSize.Name := 'lblSize';
        self.lblSize.Size := new System.Drawing.Size(369, 23);
        self.lblSize.TabIndex := 18;
        self.lblSize.TextAlign := System.Drawing.ContentAlignment.MiddleLeft;
        // 
        // lblHash
        // 
        self.lblHash.Font := new System.Drawing.Font('Microsoft Sans Serif', 9.75, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.lblHash.ForeColor := System.Drawing.Color.White;
        self.lblHash.Location := new System.Drawing.Point(52, 189);
        self.lblHash.Name := 'lblHash';
        self.lblHash.Size := new System.Drawing.Size(438, 23);
        self.lblHash.TabIndex := 19;
        self.lblHash.TextAlign := System.Drawing.ContentAlignment.MiddleLeft;
        // 
        // lblNameEng
        // 
        self.lblNameEng.Font := new System.Drawing.Font('Microsoft Sans Serif', 9.75, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.lblNameEng.ForeColor := System.Drawing.Color.White;
        self.lblNameEng.Location := new System.Drawing.Point(92, 147);
        self.lblNameEng.Name := 'lblNameEng';
        self.lblNameEng.Size := new System.Drawing.Size(398, 23);
        self.lblNameEng.TabIndex := 20;
        self.lblNameEng.TextAlign := System.Drawing.ContentAlignment.MiddleLeft;
        self.lblNameEng.Visible := false;
        // 
        // lblSizeEng
        // 
        self.lblSizeEng.Font := new System.Drawing.Font('Microsoft Sans Serif', 9.75, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.lblSizeEng.ForeColor := System.Drawing.Color.White;
        self.lblSizeEng.Location := new System.Drawing.Point(72, 168);
        self.lblSizeEng.Name := 'lblSizeEng';
        self.lblSizeEng.Size := new System.Drawing.Size(416, 23);
        self.lblSizeEng.TabIndex := 21;
        self.lblSizeEng.TextAlign := System.Drawing.ContentAlignment.MiddleLeft;
        self.lblSizeEng.Visible := false;
        // 
        // Form1
        // 
        self.AutoSizeMode := System.Windows.Forms.AutoSizeMode.GrowAndShrink;
        self.BackColor := System.Drawing.Color.DarkGray;
        self.ClientSize := new System.Drawing.Size(506, 279);
        self.Controls.Add(self.lblNameEng);
        self.Controls.Add(self.lblHash);
        self.Controls.Add(self.lblName);
        self.Controls.Add(self.lblMD5);
        self.Controls.Add(self.pb2);
        self.Controls.Add(self.pb1);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.tbFile);
        self.Controls.Add(self.pictureBox1);
        self.Controls.Add(self.menuStrip1);
        self.Controls.Add(self.Block2);
        self.Controls.Add(self.lblFileName);
        self.Controls.Add(self.label4);
        self.Controls.Add(self.Label3);
        self.Controls.Add(self.Logo1);
        self.Controls.Add(self.label1);
        self.Controls.Add(self.Block1);
        self.Controls.Add(self.lblSizeEng);
        self.Controls.Add(self.lblSize);
        self.Controls.Add(self.lblFileSize);
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.MainMenuStrip := self.menuStrip1;
        self.MaximizeBox := false;
        self.Name := 'Form1';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'FX File Analyzer';
        self.menuStrip1.ResumeLayout(false);
        self.menuStrip1.PerformLayout();
        (System.ComponentModel.ISupportInitialize(self.Block2)).EndInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).EndInit();
        (System.ComponentModel.ISupportInitialize(self.Logo1)).EndInit();
        (System.ComponentModel.ISupportInitialize(self.pb1)).EndInit();
        (System.ComponentModel.ISupportInitialize(self.pb2)).EndInit();
        (System.ComponentModel.ISupportInitialize(self.Block1)).EndInit();
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
