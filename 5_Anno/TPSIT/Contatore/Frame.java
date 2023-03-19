import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.KeyEvent;

public class Frame extends JFrame {

    Contatore c = new Contatore(); //crea un oggetto client di tipo Contatore e di nome c

    private PannelloForm pannelloForm; //crea il form dove saranno presenti i form per inserire i dati da inviare al server

    public Frame() { //costruttore dell'oggetto di tipo frame

        super("Contatore"); // titolo della finestra che si aprirà

        c.connetti(); //richiama il metodo connetti della classe client

        setLayout(new BorderLayout()); //definisce il tipo di layout che andremo ad utilizzare

        pannelloForm = new PannelloForm();

        pannelloForm.setFormListener(new FormListener() {

            @Override
            public void formEventListener(FormEvent fe) {
                String numContatore = fe.getnumContatore(); //prende il contenuto del form numContatore
                String consumo = fe.getConsumo(); //prende il contenuto del form consumo
                String data = fe.getData(); //prende il contenuto del form data

                c.comunica(numContatore, consumo, data); // invia i dati ricevuti precedentemente al client che successivamente si occuperà di inviarli al server
            }

        });

        add(pannelloForm, BorderLayout.LINE_START); //rende visibile il pannelloForm

        setSize(314, 200); // definisce la dimensione della finstra
        setLocationRelativeTo(null); //colloca la finestra al centro dello schermo all'apertura
        setResizable(false); // impedisce di ridimensionare la finestra
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); // chiude la finestra e il processo al clic della x rossa
        setVisible(true);//rende visibile l'intera finestra
    }

}
