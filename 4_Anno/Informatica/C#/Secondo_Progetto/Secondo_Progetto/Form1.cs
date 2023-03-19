namespace Secondo_Progetto
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e){
            
            textBox1.Text = "Ciao Ciao Mondo";
            textBox1.BackColor = Color.Yellow;
            
        }

        private void textBox1_keypress(object sender, KeyPressEventArgs e){
            //string interpolation
            Console.WriteLine($"key pressed: {e.KeyChar} ");
        }
    }
}