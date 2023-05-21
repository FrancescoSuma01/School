<?php

$hostname = 'localhost';
$user = 'root';
$pwd = '';
$dbname = 'users';
$port = 3306;

//creazione della connessione al database
$conn = @new mysqli($hostname, $user, $pwd, $dbname, $port);

// Check connection
if (!$conn) {
    die('Connection failed: ' . mysqli_connect_error());
} else {
    echo 'Connected successfully';
}

// Process form submission
if (isset($_POST['send'])) {
    // Get form data
    $name = htmlspecialchars($_POST['name']);
    $phone = htmlspecialchars($_POST['phone']);
    $email = htmlspecialchars($_POST['email']);
    $pass = htmlspecialchars($_POST['pass']);
    $hash = password_hash($pass, PASSWORD_BCRYPT);

    $sql = "INSERT INTO utente (nome, telefono, email, pwd) VALUES ('$name', '$phone', '$email', '$hash')";

    // Esecuzione dell'istruzione di INSERT
    if ($conn->query($sql) === true) {
        header('Content-Type: text/html');
        include('ok.html');
    } else {
        header('Content-Type: text/html');
        include('error.html');
    }
}

// Close MySQL connection
mysqli_close($conn);

?>
