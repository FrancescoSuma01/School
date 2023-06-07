<?php
    print_r($_POST);

    $cognome = htmlentities($_POST('cognome'));
    $nome = htmlentities($_POST('nome'));
    $idComune = htmlentities($_POST('comuni'));

    if(empty($cognome) || empty($name)):

        echo "non hai avvalorato i campi<br>";
        echo "<a href='start.php'>Back</a>";
    
    else:

        echo "dati presenti... procedo ad inserire<br>";
        $connection = new mysqli('localhost', 'root', '', 'rubrica') or die ("error connection");

        $sql = "insert into studenti(nome, cognome, idComune) values ('$nome', '$cognome', $idComune)";

        echo "sto per eseguire: $sql<br>";

        $res = $connection->query($sql);

        if($res):

            echo "insert successful<br>";
            echo "inserted studente con id: ".$connection->insert_id."<br>";
            echo "";

        else:

            echo "insert NOT successful<br>";
            echo "";

        endif;

    endif;
?>