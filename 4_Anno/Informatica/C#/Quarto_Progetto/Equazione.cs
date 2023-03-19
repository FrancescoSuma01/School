using System;
using System.Collections.Generic;
using System.Text;

namespace Convertitore
{
    class Equazione
    {

        private double a;
        private double b;
        private double c;

        private double ris1;
        private double ris2;

        public double Ris1
        {
            get { return ris1; }
            set { ris1 = value;  }
        }

        public double Ris2 { get => ris2; set => ris2 = value; }

        public Equazione(double a, double b, double c)
        {
            this.a = a;
            this.b = b;
            this.c = c;
        }


        public void Solve()
        {
            double delta;
            double radix1;

            if (a < 0)
            {
                a = a + (a * 2);
                b = b + (b * 2);
                c = c + (c * 2);
            }

            delta = (b * b) - (4 * (a * c));

            radix1 = (float)Math.Sqrt(delta);

            ris1 = ((-b) - radix1) * (2 * a);
            ris2 = ((-b) + radix1) * (2 * a);

        }



    }
}
