import java.io.*;
import java.net.*;


public class Contatore {
    
    private Socket primoSocket = null;

    private int porta = 1025; //porta del server

    private DataInputStream in;
    private DataOutputStream out;
/* 
    private BufferedReader nContatore;
    private String numContatore;

    private BufferedReader consumo;
    private String consumption;

    LocalDateTime now = LocalDateTime.now();
    DateTimeFormatter formatter = DateTimeFormatter.ofPattern("dd-MM-yyyy HH:mm:ss");

    private String data = now.format(formatter); 

    BufferedReader exit;
    String uscita = " ";  */

    public void comunica(String numContatore, String consumo, String data){

        try {

            out.writeBytes(numContatore + "\n");

            out.writeBytes(consumo + "\n");

            out.writeBytes(data + "\n");

            boolean ricevuta = in.readBoolean();
            System.out.println(ricevuta);

            
        } catch (IOException e) {
            
            e.printStackTrace();

        }

    }

    public Socket connetti(){

        try {

            System.out.println("Provo a connettermi al server...");
            Socket primoSocket = new Socket(InetAddress.getLocalHost(), porta);

            System.out.println("Connesso...");
            in = new DataInputStream(primoSocket.getInputStream());
            out = new DataOutputStream(primoSocket.getOutputStream());

        } catch (UnknownHostException e) {
            
            System.err.println("Host sconosciuto");

        }catch(Exception e) {
            
            System.err.println("Impossibile stabilire la connessione!");

        }

        return primoSocket;

    }
}
