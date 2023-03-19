using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Persona
{
    public partial class Form1 : Form
    {
        private List<Persona> elenco = new List<Persona>();

        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (txtName.Text != "" && txtCognome.Text != "")
            {
                string nome = txtName.Text;
                string cognome = txtCognome.Text;

                Persona p = new Persona(nome, cognome);

                elenco.Add(p);
                txtName.Text = "";
                txtCognome.Text = "";

                comboBox1.Items.Clear();
                foreach(Persona person in elenco)
                {
                    comboBox1.Items.Add(person.print());
                }
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            MessageBox.Show(comboBox1.SelectedItem.ToString());
            listBox1.Items.Add(comboBox1.SelectedItem.ToString());

            //if(comboBox1.SelectedItem != null)
            //{
            //    if (listBox1.Items.Contains(comboBox1.SelectedItem.ToString()))
            //    {
            //        listBox1.Items.Add(comboBox1.SelectedItem.ToString());
            //    }
            //}
        }
    }
}
