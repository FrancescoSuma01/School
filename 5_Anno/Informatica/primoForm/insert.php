<?php
    /*
        @author: francesco suma;
        @class: 5BIA;
        @traccia: inserisce un record in una tabella di un database tramite una query scritta in php;
    */
?>

<?php

    $con = new mysqli('localhost', 'root', '', 'City2City');
    if (mysqli_connect_errno()) {
        echo 'Connessione non effettuata: ' . mysqli_connect_error() . '<BR>';
        exit();
    }

    $nome = $_GET['nome'];
    $cognome = $_GET['cognome'];
    $qualifica = $_GET['qualifica'];

    $sql = "INSERT INTO Dipendente VALUES (NULL, $nome, $cognome, NULL, $qualifica)";

    
    ($ris = $con->query($sql)) or die('Query fallita!');

    // Eseguo l'istruzione SQL
    if (mysqli_query($conn, $sql)) {
        echo "Nuovo record inserito con successo";
    } else {
        echo "Errore: " . $sql . "<br>" . mysqli_error($conn);
    }

?>
