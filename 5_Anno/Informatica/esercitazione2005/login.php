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
    //echo 'Connected successfully';
}

// Prendi i dati in input
$email = $_POST['email'];
$pass = $_POST['pass'];

// Query per verificare l'email e la password nel database
$sql = "SELECT * FROM utente WHERE email = '$email'";
$result = $conn->query($sql);

if ($result->num_rows > 0) {
    // Email trovata nel database
    $row = $result->fetch_assoc();
    $hashedPassword = $row['pwd'];
    
    // Verifica la password
    if (password_verify($pass, $hashedPassword)) {
        header('Content-Type: text/html');
        include('ok.html');
    } else {
        header('Content-Type: text/html');
        include('error.html');
    }
} else {
    echo "Email non trovata";
    // Altri codici o reindirizzamento per email non trovata
}

// Chiusura della connessione
$conn->close();
?>
