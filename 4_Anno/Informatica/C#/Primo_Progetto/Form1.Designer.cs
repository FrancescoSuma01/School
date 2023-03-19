namespace Primo_Progetto
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.label1 = new System.Windows.Forms.Label();
            this.nome = new System.Windows.Forms.TextBox();
            this.saluto = new System.Windows.Forms.TextBox();
            this.salutami = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(87, 169);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(141, 20);
            this.label1.TabIndex = 0;
            this.label1.Text = "Inserisci il tuo nome";
            // 
            // nome
            // 
            this.nome.Location = new System.Drawing.Point(303, 162);
            this.nome.Name = "nome";
            this.nome.Size = new System.Drawing.Size(125, 27);
            this.nome.TabIndex = 1;
            // 
            // saluto
            // 
            this.saluto.Location = new System.Drawing.Point(303, 243);
            this.saluto.Name = "saluto";
            this.saluto.Size = new System.Drawing.Size(125, 27);
            this.saluto.TabIndex = 2;
            // 
            // salutami
            // 
            this.salutami.Location = new System.Drawing.Point(568, 205);
            this.salutami.Name = "salutami";
            this.salutami.Size = new System.Drawing.Size(94, 29);
            this.salutami.TabIndex = 3;
            this.salutami.Text = "salutami";
            this.salutami.UseVisualStyleBackColor = true;
            this.salutami.Click += new System.EventHandler(this.buttonClick);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 20F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1057, 702);
            this.Controls.Add(this.salutami);
            this.Controls.Add(this.saluto);
            this.Controls.Add(this.nome);
            this.Controls.Add(this.label1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private Label label1;
        private TextBox nome;
        private TextBox saluto;
        private Button salutami;
    }
}