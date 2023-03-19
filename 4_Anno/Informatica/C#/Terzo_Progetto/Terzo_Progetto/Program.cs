using System;   //namespace di sistema, dove si trovano tutte le librerie della .net

namespace Terzo_Progetto
{
    public class Hello
    {
        public static void Main() //entry point dell'esecuzione
        {
            /*
            //---Richiesta del nome---
            Console.WriteLine("Hello");

            Console.Write("Inserisci il tuo nome: ");
            string name = Console.ReadLine(); //acquisisce una sequenza di caratteri

            Console.Write("Il nome inserito: ");
            Console.WriteLine(name);
            */


            /*
             //---Calcolo Area Rettangolo---
            float width = 0;
            float height = 0;

            do
            {
                Console.Write("Inserisci la base: ");
                width = float.Parse(Console.ReadLine()); //effettua il casting da stringa a int
            } while (width <= 0);

            while (height <= 0)
            {
                Console.Write("Inserisci l'altezza: ");
                height = float.Parse(Console.ReadLine());
            }

            Console.WriteLine($"Area del rettangolo di base {width} e altezza {height} = {width * height}");
            */

            /*
            //---Riempi Vettore da 1 a 10---
            int[] vettore = new int[10];
            for (int i = 0; i < vettore.Length; i++)  //vettore.lenght da la dimensione del vettore
            {
                vettore[i] = i + 1;
            }

            foreach (int number in vettore)  //costrutto per iterare sulle collezioni(lista)
            {
                Console.WriteLine(number);
            }
            */

            //---Stringhe---
            string s = "Ciao Ciao Mondo";
            String s2 = new String("Costruiamo Stringhe");
            Console.WriteLine(s.Length); //numero di elementi che contiene la stringa
            Console.WriteLine(s);
            s.CompareTo(s2); //esegue il confronto tra stinghe 
            s.EndsWith("mondo"); //se la stringa finisce con...
            s.Equals(s2); //se due stringhe sono uguali


        }
    }
}