import java.io.*;
import java.net.*;

public class Server {

    private ServerSocket server = null;
    private Socket socketClient = null;

    private int porta = 1025; // porta sulla quale client e server comunicheranno

    private DataInputStream in; // variabile per leggere
    private DataOutputStream out; // variabile per iniviare

    private String numContatore;
    private String consumo;
    private String data;
    private String exit = " ";

    public void comunica() {

        try {

            System.out.println("\n-----------------------------------------\n");

            System.out.println("Messaggio ricevuto dal cliente");

            numContatore = in.readLine();
            System.out.println("Numero contatore: " + numContatore);

            consumo = in.readLine();
            System.out.println("Consumo: " + consumo);

            data = in.readLine();
            System.out.println("Data della rilevazione: " + data);

            System.out.println("Operazione avvenuta con successo ");

            System.out.println("Chiudo la connesione");
            socketClient.close();

        } catch (IOException e) {

            e.printStackTrace();

        }

    }

    public Socket connessione() {

        try {

            System.out.println("Inizializzo il server...");
            server = new ServerSocket(porta); // inizializiamo il servizio

            System.out.println("Server in ascolto sulla porta: " + porta);
            socketClient = server.accept(); // mi metto in ascolto sulla porta che ho aperto

            System.out.println("Connessione stabilita con un client");
            server.close();// evitiamo connessioni multiple

            in = new DataInputStream(socketClient.getInputStream());
            out = new DataOutputStream(socketClient.getOutputStream());

        } catch (IOException e) {

            e.printStackTrace();

        }

        return socketClient;

    }

    public static void main(String[] args) {

        Server s = new Server();

        s.connessione();
        s.comunica();

    }

}
