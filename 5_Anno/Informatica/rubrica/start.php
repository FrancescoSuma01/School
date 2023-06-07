<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Inserimento Studenti</title>
</head>
<body>
    
    <div>

        <h3>Pagina di inserimento di studenti</h3>

        <p>

            <form action="addStudent.php" method="POST">

                <fieldset>

                    <label>Dati dello studente</label>
                    
                    nome: <input type="text" name="nome" placeholder="nome dello studente"><br>
                    cognome: <input type="text" name="cognome" placeholder="cognome dello studente"><br>
                    password: <input type="password" name="pwd" placeholder="password"><br>

                </fieldset>

                <br>

                <select name="comuni">
                    <!-- <option value="comune1">Ceglie Messapica</option>
                    <option value="comune2">Francavilla Fontana</option>
                    <option value="comune3">Villa Castelli</option> -->

                    <?php
                        $connection = new mysqli('localhost', 'root', '', 'rubrica', 3306) or die("Errore di connessione al database");
                        // $connection->select_db(nomedb);

                        /* if($connection->connect_errno):
                            echo "Errore di connessione a mySQL: ".$connection->connect_errno."<br>";
                            exit("Chiudo lo script...");
                        endif; */

                        $sql = 'select * from comuni';

                        $result = $connection->query($sql);

                        echo "Ritornate ".$result->num_rows."<br>";

                        if($result->num_rows):

                            while($comune = $result->fetch_assoc()):

                                // print_r($comune);
                                $id = $comune['id'];
                                $nome = $comune['nome'];
                                $provincia = $comune['provincia'];
                                $cap = $comune['cap'];

                                echo "<option value=".$id.">$nome, $cap($provincia)</option>";

                            endwhile;

                        endif;

                        $result->free();
                        $connection->close();

                    ?>

                </select>

                <input type="submit" name="sendto" value="Inserisci studente"><br>

            </form>
        
        </p>

    </div>

</body>
</html>