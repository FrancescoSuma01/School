<?php
// Recupero i valori inviati dal form
$ISBN = $_POST['ISBN'];

// Connessione al database per l'inserimento del libro
$conn = mysqli_connect('localhost', 'root', '', 'Libri');

// Check connection
if (!$conn) {
    die('Connection failed: ' . mysqli_connect_error());
}

echo 'Connected successfully<br>';

// Esecuzione della query per l'inserimento del libro
$query = "DELETE FROM libri WHERE ISBN = $ISBN";

echo $query."<br>";

if (mysqli_query($conn, $query)) {
    echo "Libro eliminatp con successo!";
} else {
    echo "Errore durante la delete del libro: " . mysqli_error($conn);
}

// Chiusura della connessione al database
mysqli_close($conn);
?>
