procedure InitializeComponent;
    begin
        self.label1 := new System.Windows.Forms.Label();
        self.label2 := new System.Windows.Forms.Label();
        self.SuspendLayout();
        // 
        // label1
        // 
        self.label1.Font := new System.Drawing.Font('Microsoft Sans Serif', 11.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label1.Location := new System.Drawing.Point(12, 9);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(211, 23);
        self.label1.TabIndex := 1;
        self.label1.Text := 'FX File Analyzer 1.1';
        self.label1.TextAlign := System.Drawing.ContentAlignment.TopCenter;
        // 
        // label2
        // 
        self.label2.Font := new System.Drawing.Font('Microsoft Sans Serif', 9, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label2.Location := new System.Drawing.Point(12, 44);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(211, 57);
        self.label2.TabIndex := 2;
        self.label2.Text := 'The program was written by Konyshev Yuriy aka Yura_FX on PascalABC.NET.';
        self.label2.TextAlign := System.Drawing.ContentAlignment.TopCenter;
        // 
        // Form3
        // 
        self.AutoSizeMode := System.Windows.Forms.AutoSizeMode.GrowAndShrink;
        self.BackColor := System.Drawing.SystemColors.ControlDarkDark;
        self.ClientSize := new System.Drawing.Size(235, 102);
        self.Controls.Add(self.label2);
        self.Controls.Add(self.label1);
        self.ForeColor := System.Drawing.Color.White;
        self.MaximizeBox := false;
        self.MinimizeBox := false;
        self.Name := 'Form3';
        self.ShowIcon := false;
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'About the program';
        self.ResumeLayout(false);
    end;
