using System;
using System.Collections.Generic;
using System.Text;

namespace LibroApp
{
    class Libro
    {
        private string _titolo;
        private string _autore;
        private string _genere;


        public Libro()
        {
            Titolo = "";
            Autore = "";
            Genere = "";
        }

        public Libro(string t, string a, string g)
        {
            Titolo = t;
            Autore = a;
            Genere = g;
        }

        public string Description()
        {
            return Titolo + " \t " + Autore + " \t " + Genere;
        }

        public string Genere { get => _genere; set => _genere = value; }
        public string Autore { get => _autore; set => _autore = value; }
        public string Titolo { get => _titolo; set => _titolo = value; }
    }
}
