<?php
/*
        @author: francesco suma;
        @class: 5BIA;
        @traccia: prende alcuni record di una tabella di un database tramite una query scritta in php;
    */
?>

<?php

$con = new mysqli('localhost', 'root', '', 'City2City');
if (mysqli_connect_errno()) {
    echo 'Connessione non effettuata: ' . mysqli_connect_error() . '<BR>';
    exit();
}
$sql = 'SELECT d.nome, d.cognome FROM dipendente d';

($ris = $con->query($sql)) or die('Query fallita!');

echo '<TABLE><TR><TH>Nome Dipendente<TH>Cognome Dipendente</TR>';

foreach ($ris as $riga) {
    echo '<TR><TD>' . $riga['nome'];
    echo '<TD>' . $riga['cognome'];
}

$con->close();

?>
