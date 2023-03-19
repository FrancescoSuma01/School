using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Persona
{
    class Persona
    {
        private string _nome;
        private string _cognome;

        public Persona()
        {

        }

        public Persona(string n, string c)
        {
            _nome = n;
            _cognome = c;
        }

        public string Nome
        {
            get { return _nome; }
            set { _nome = value;  }
        }

        public string Cognome { get => _cognome; set => _cognome = value;  }

        public string print()
        {
            //string msg = " ";
            //msg = "Ciao sono " + _nome + " " + _cognome;
            //return msg;

            return _nome.ToUpper() + " " + _cognome.ToUpper();
        }
    }
}
