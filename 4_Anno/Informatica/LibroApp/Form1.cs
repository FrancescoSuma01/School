using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace LibroApp
{
    public partial class Form1 : Form
    {
        private List<Libro> biblio;

        public Form1()
        {
            InitializeComponent();
            biblio = new List<Libro>();

            comboBox1.Items.Add("Giallo");
            comboBox1.Items.Add("Fantasy");
            comboBox1.Items.Add("Avventura");
            comboBox1.Items.Add("Romantic");
            comboBox1.Items.Add("Saggio");
            listBox1.Items.Clear();

            rdBtnAutore.Checked = true;

            Libro b1 = new Libro("Pinocchio", "Collodi", "Fantasy");
            Libro b2 = new Libro("Lucignolo", "Collodi", "Giallo");

            biblio.Add(b1);
            biblio.Add(b2);

            foreach(Libro a in biblio)
            {
                listBox1.Items.Add(a.Description());
            }
           
        }

        private void btnClose_Click(object sender, EventArgs e)
        {
            Close();
        }

        private void btnAdd_Click(object sender, EventArgs e)
        {
            string t = txtTitolo.Text;
            string a = txtAutore.Text;
            string g = comboBox1.SelectedItem.ToString();

            if (t.Length>0 && a.Length >0 && g.Length > 0)
            { 

                Libro lb = new Libro(t, a, g);

                biblio.Add(lb);

                if (!listBox1.Items.Contains(lb.Description()))
                {
                    listBox1.Items.Add(lb.Description());
                }

                



                txtAutore.Text = "";
                txtTitolo.Text = "";
                comboBox1.SelectedItem = -1;
                comboBox1.Text = "Genere";
            }

        }

        private void btnSearch_Click(object sender, EventArgs e)
        {
            //string option = rdBtnAutore.Checked ? "Autore": "Genere";
            //MessageBox.Show($"{option} =  {txtSearch.Text}");

            listBox1.Items.Clear();

            if (rdBtnAutore.Checked)
            {
               
                foreach (Libro lb in biblio)
                {
                    if (lb.Autore == txtSearch.Text)
                    {
                        listBox1.Items.Add(lb.Description());
                    }
                }

            }
            else
            {
               
                foreach (Libro lb in biblio)
                {
                    if (lb.Genere == txtSearch.Text)
                    {
                        listBox1.Items.Add(lb.Description());
                    }
                }

            }

            if (listBox1.Items.Count == 0)
            {
                MessageBox.Show("No items founds", "Ricerca");
            }

        }
    }
}
