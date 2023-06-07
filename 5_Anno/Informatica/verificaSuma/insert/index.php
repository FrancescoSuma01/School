<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <h1>Inserimento di un libro</h1>

    <form action="insert.php" method="POST">
        <label for="ISBN">ISBN:</label>
        <input type="text" name="ISBN" id="ISBN" required><br><br>

        <label for="titolo">Titolo:</label>
        <input type="text" name="titolo" id="titolo" required><br><br>

        <label for="lingua">lingua:</label>
        <input type="text" name="lingua" id="lingua" required><br><br>

        <label for="anno">anno:</label>
        <input type="text" name="anno" id="anno" required><br><br>

        <label for="autore">Autore:</label>
        
        <select name="autore" id="autore" required>
            <option value="">Seleziona un autore</option>
            <?php
            // Connessione al database per ottenere la lista degli autori
            $conn = mysqli_connect('localhost', 'root', '', 'Libri');
            
            // Esecuzione della query per ottenere la lista degli autori
            $authors = 'SELECT  Id_Autore as id, Nome as nome, Cognome as cognome FROM autori';
            $result = mysqli_query($conn, $authors);
            
            // Creazione delle opzioni del menu a discesa per gli autori
            while ($row = mysqli_fetch_assoc($result)) {
                $id = $row['id'];
                echo "<option value=$id>". $row['cognome']."</option>";
            }
            
            // Chiusura della connessione al database
            mysqli_close($conn);
            ?>
        </select><br><br>

        <label for="editore">Editore:</label>
        <select name="editore" id="editore" required>
            <option value="">Seleziona un editore</option>
            <?php
            // Connessione al database per ottenere la lista degli editori
            $conn = mysqli_connect('localhost', 'root', '', 'Libri');
            
            $editors = 'SELECT id_editore as id, ragione_sociale FROM editori';
            $result = mysqli_query($conn, $editors);
            
            // Creazione delle opzioni del menu a discesa per gli editori
            while ($row = mysqli_fetch_assoc($result)) {
                $id = $row['id'];
                echo "<option value=$id>". $row['ragione_sociale']."</option>";
            }
            
            // Chiusura della connessione al database
            mysqli_close($conn);
            ?>
        </select><br><br>


        <label for="costo">Costo:</label>
        <input type="text" name="costo" id="costo" required><br><br>

        <input type="submit" value="Inserisci libro">
    </form>
</body>

</html>


</body>

</html>
