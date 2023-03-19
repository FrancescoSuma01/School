namespace Primo_Progetto
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void buttonClick(object sender, EventArgs e)
        {
            saluto.Text = "Ciao " + nome.Text;
        }
    }
}