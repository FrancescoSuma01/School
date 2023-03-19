using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Convertitore
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            double coef1 = double.Parse(txtCoeff_a.Text);
            double coef2 = double.Parse(txtCoeff_b.Text);
            double coef3 = double.Parse(txtCoeff_c.Text);

            Equazione eq = new Equazione(coef1, coef2, coef3);
            eq.Solve();

            txtX1.Text = eq.Ris1.ToString();
            txtX2.Text = eq.Ris2.ToString();

        }

        private void button2_Click(object sender, EventArgs e)
        {
            txtCoeff_a.Text = "";
            txtCoeff_b.Text = "";
            txtCoeff_c.Text = "";

        }

        private void button3_Click(object sender, EventArgs e)
        {
            Close();
        }
    }
}
