import java.io.*;
import java.net.*;

public class Server {

    ServerSocket server = null;
    Socket socketClient = null;

    int porta = 6789; //porta del server

    DataInputStream in;
    DataOutputStream out;

    String letto;

    public void comunica(){

        try {

            do{
                System.out.println("Aspetto un messaggio dal client");
                letto = in.readLine();

                System.out.println("Messaggio ricevuto " + letto);
                String risposta = letto.toUpperCase();

                System.out.println("Rispondo con " + risposta);
                out.writeBytes(risposta + "\n");
            }while(!letto.toLowerCase().equals("esci"));
            System.out.println("Chiudo la connesione");
            socketClient.close();

        } catch (IOException e) {
            
            e.printStackTrace();

        }

    }

    public Socket attendi(){

        try {

            System.out.println("Inizializzo il server...");
            server = new ServerSocket(porta); //inizializiamo il servizio

            System.out.println("Server in ascolto sulla porta: " + porta);
            socketClient = server.accept(); //mi metto in ascolto sulla porta che ho aperto

            System.out.println("Connessione stabilita con un client");
            server.close();//evitiamo connessioni multiple

            in = new DataInputStream(socketClient.getInputStream());
            out = new DataOutputStream(socketClient.getOutputStream());

        } catch (IOException e) {
            
            e.printStackTrace();

        }

        return socketClient;

    }

    public static void main(String[] args){

        Server s = new Server();

        s.attendi();
        s.comunica();

    }

}
