<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Potter</title>
</head>

<body>
    <h1> Harry Potter</h1>

    <?php
    
    $hostname = 'localhost';
    $user = 'root';
    $pwd = '';
    $dbname = 'harrypotter';
    $port = 3306;
    
    $driver = new mysqli_driver();
    $driver->report_mode = MYSQLI_REPORT_OFF;
    
    // require_once 'login.php';
    $connessione = @new mysqli($hostname, $user, $pwd, $dbname, $port);
    
    if ($connessione->connect_errno):
        echo 'Errore di connessione: ';
        echo $connessione->connect_error;
        echo '<br>';
        exit('Stopping...');
    endif;
    
    echo 'Connected<br>';
    // echo "connesso a $hostname con utente: $user e pwd= $pwd<br>";
    echo $connessione->host_info;
    
    $sql = 'SELECT P.id, P.nome, P.casata FROM personaggi P INNER JOIN casata AS C ON C.id = P.casata';
    
    $resultset = $connessione->query($sql);
    
    if ($resultset->num_rows > 0):
        echo '<br>';
    
        echo 'Ritornate ' . $resultset->num_rows . ' tuple dal db<br>';
        // var_dump($resultset);
        echo '<table><tr><th>id</th><th>nome</th><th>idcitta</th></tr>';
    
        while ($row = $resultset->fetch_assoc()):
            // var_dump($row);
            echo '<tr>';
            echo '<td>' . $row['id'] . '</td>';
            echo '<td>' . $row['nome'] . '</td>';
            echo '<td>' . $row['casata'] . '</td>';
            echo '</tr>';
        endwhile;
    
        echo '</table>';
    else:
        echo 'Ritornate 0 (' . $resultset->num_rows . ') dal db<br>';
    endif;
    
    $connessione->close();
    
    ?>
    <a href="aggiungi.php">Aggiungi personaggio</a>
</body>

</html>
