<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Inserimento di un libro</title>
</head>

<body>
    <h1>Inserimento di un libro</h1>

    <form action="select.php" method="POST">
        <select name="anno" id="anno" required>
            <option value="">Seleziona un anno</option>
            <?php
            // Connessione al database
            $conn = mysqli_connect('localhost', 'root', '', 'Libri');
            
            // Verifica della connessione
            if (!$conn) {
                die('Connessione al database fallita: ' . mysqli_connect_error());
            }
            
            // Esecuzione della query per ottenere la lista degli anni di stampa dei libri
            $query = 'SELECT DISTINCT anno FROM libri ORDER BY anno DESC';
            $result = mysqli_query($conn, $query);
            
            // Creazione delle opzioni del menu a tendina per gli anni di stampa
            while ($row = mysqli_fetch_assoc($result)) {
                $anno = $row['anno'];
                echo "<option value='$anno'>$anno</option>";
            }
            
            // Chiusura della connessione al database
            mysqli_close($conn);
            ?>
        </select>

        <br><br>

        <input type="submit" value="Seleziona anno">
    </form>
</body>

</html>
