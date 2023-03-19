namespace EsercizioRaddoppia
{
    public partial class Form1 : Form
    {
        public Form1(){
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e){

        }

        private void label2_Click(object sender, EventArgs e){

        }

        private void buttonClick(object sender, EventArgs e){
            risultato.Text = Convert.ToString((Int32.Parse(numLetto.Text) * 2));
        }
    }
}