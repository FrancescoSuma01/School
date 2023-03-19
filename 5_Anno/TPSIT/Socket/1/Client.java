import java.io.*;
import java.net.*;

public class Client {
    
    Socket primoSocket = null;

    int porta = 6789; //porta del server

    DataInputStream in;
    DataOutputStream out;

    BufferedReader tastiera;
    String messaggio;

    public void comunica(){

        try {

            do{
                tastiera = new BufferedReader(new InputStreamReader(System.in));
                System.out.println("Messaggio da inviare la server");
                messaggio = tastiera.readLine();

                System.out.println("Invio: " + messaggio);
                out.writeBytes(messaggio + "\n");

                System.out.println("In attesa di risposta...");
                String ricevuta = in.readLine();

                System.out.println("Risposta del server: " + ricevuta);
            }while(!messaggio.toLowerCase().equals("esci"));
            
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

    public static void main(String[] args){


        Client c = new Client();
        c.connetti();
        c.comunica();

    }

}
