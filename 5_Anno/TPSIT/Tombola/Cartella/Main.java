package Cartella;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int nTabelle = 0;

        System.out.println("Ciao, questa è il gioco della tombola");

        do {
            System.out.println("Digita quante tabelle vuoi (max 3 tabelle): ");
            nTabelle = scanner.nextInt();
            scanner.nextLine();

            if (nTabelle > 3) {

                System.out.println("ERRORE! Puoi inserire massimo 3 tabelle");

            }

        } while (nTabelle>3);

        

        for (int i = 0; i < nTabelle; i++) {
            
            new Cartella(i + 1);
        
        }
        
    }
}