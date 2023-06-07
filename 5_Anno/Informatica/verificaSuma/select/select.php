<?php
// Connessione al database
$conn = mysqli_connect('localhost', 'root', '', 'Libri');

// Verifica della connessione
if (!$conn) {
    die('Connessione al database fallita: ' . mysqli_connect_error());
}

// Verifica se è stato selezionato un anno e esegue la query dei libri corrispondenti
if (isset($_POST['anno'])) {
    $anno_selezionato = $_POST['anno'];

    // Esecuzione della query per ottenere i libri per l'anno selezionato
    $query_libri = "SELECT titolo, lingua, costo FROM libri WHERE anno = '$anno_selezionato'";
    $result_libri = mysqli_query($conn, $query_libri);

    // Mostra la tabella dei libri
    if (mysqli_num_rows($result_libri) > 0) {

        echo '<table><tr><th>titolo</th><th>lingua</th><th>costo</th></tr>';

        while ($row = mysqli_fetch_assoc($result_libri)) {
            echo '<tr>';
            echo '<td>' . $row['titolo'] . '</td>';
            echo '<td>' . $row['lingua'] . '</td>';
            echo '<td>' . $row['costo'] . '</td>';
            echo '</tr>';
        }

        echo "</table>";
    } else {
        echo 'Nessun libro trovato per l\'anno selezionato.';
    }

    // Chiusura del risultato della query
    mysqli_free_result($result_libri);
}

// Chiusura della connessione al database
mysqli_close($conn);
?>
