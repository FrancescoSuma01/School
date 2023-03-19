package Tris;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.Random;

public class Tabella extends JFrame implements ActionListener{
    Random nRandom = new Random();
    JLabel textLabel;
    JPanel pannello;
    JButton[][] pulsantiNumeri;

    Tabella(){

        this.setTitle("Cartella - FS"); //titolo della finestra
        this.setLayout(new BorderLayout()); //imposta come layout il border layout
        this.setSize(500, 500); //imposta la dimensione della finestra
        this.setLocationRelativeTo(null); //imposta la posizione della scheda

        createLabelCartella();

        pannello = new JPanel(); //crea un JPanel che conterrà la tabella
        pulsantiNumeri = new JButton[3][3]; //crea una matrice di pulsanti

        //definizione caratteristiche dei 27 bottoni
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                pulsantiNumeri[i][j] = new JButton(); //Crea un nuovo bottone
                pulsantiNumeri[i][j].setFont(new Font("Times New Roman", Font.BOLD, 45)); //Definisce il font di cio che verrà inserito nei bottoni
                pulsantiNumeri[i][j].setBorder(BorderFactory.createLineBorder(Color.red, 2)); //Definizione delle caratteristiche dei bordi delle tabelle
                pulsantiNumeri[i][j].setOpaque(true); //Definizione dell'opacità
                pulsantiNumeri[i][j].setFocusable(false); //Definizione del focus
                pulsantiNumeri[i][j].addActionListener(this); 
                pannello.add(pulsantiNumeri[i][j]); //aggiunta del pulsante al pannello
            }
        }

        pannello.setLayout(new GridLayout(3,3));
        this.add(textLabel,BorderLayout.NORTH); //collocamento della textLabel nella parte alta
        this.add(pannello,BorderLayout.CENTER); //collocamento del pannello nella parte Centrale
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); //Chiusura automatica dell'applicazione alla clic sulla x rossa
        this.setVisible(true);
    }

    public void createLabelCartella(){
        //crea la label con scritto Cartella in bianco con sfondo rosso
        textLabel = new JLabel("~TRIS~", SwingConstants.CENTER);
        textLabel.setBackground(Color.RED);
        textLabel.setForeground(Color.WHITE);
        textLabel.setHorizontalAlignment(JLabel.CENTER);
        textLabel.setFont(new Font("Times New Roman", Font.PLAIN, 62));
        textLabel.setOpaque(true);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        int n = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if(e.getSource()==pulsantiNumeri[i][j] && (n%2)==0){
                    if(pulsantiNumeri[i][j].getBackground()!=(Color.blue)){
                        pulsantiNumeri[i][j].setBackground(Color.blue);
                    }
                }else if(e.getSource()==pulsantiNumeri[i][j] && (n%2)!=0){
                    if(pulsantiNumeri[i][j].getBackground()!=(Color.green)){
                        pulsantiNumeri[i][j].setBackground(Color.green);
                    }
                }
            }
        }

    }
}
