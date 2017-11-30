procedure InitializeComponent;
    begin
        self.button1 := new System.Windows.Forms.Button();
        self.SuspendLayout();
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(21, 79);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(284, 88);
        self.button1.TabIndex := 0;
        self.button1.Text := 'Нажми меня и мы попрощаемся';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(329, 193);
        self.Controls.Add(self.button1);
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.FixedSingle;
        self.MaximizeBox := false;
        self.Name := 'Form1';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'Первый проект';
        self.ResumeLayout(false);
    end;
