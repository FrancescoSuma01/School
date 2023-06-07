<?php
// Recupero i valori inviati dal form
$ISBN = $_POST['ISBN'];
$titolo = $_POST['titolo'];
$lingua = $_POST['lingua'];
$anno = $_POST['anno'];
$autore = $_POST['autore'];
$editore = $_POST['editore'];
$costo = $_POST['costo'];

// Connessione al database per l'inserimento del libro
$conn = mysqli_connect('localhost', 'root', '', 'Libri');

// Check connection
if (!$conn) {
    die('Connection failed: ' . mysqli_connect_error());
}

echo 'Connected successfully<br>';

// Esecuzione della query per l'inserimento del libro
$query = "INSERT INTO libri 
          VALUES ('$ISBN', '$titolo', '$lingua', '$anno', '$autore', '$editore', '$costo')";

echo $query."<br>";

if (mysqli_query($conn, $query)) {
    echo "Libro inserito con successo!";
} else {
    echo "Errore durante l'inserimento del libro: " . mysqli_error($conn);
}

// Chiusura della connessione al database
mysqli_close($conn);
?>
