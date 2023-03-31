<?php
    $a = array("Makayla", "Luciano", "Lizzie", "Esther", "Rachel", "Lesly", "Lambert", "Stewart", "Maxime", "Jaquan", "Jena", "Dee", "Dejah", "Reid", "Jenifer", "Daron", "Imani", 
    "Roger", "Heloise", "Richmond", "Zita", "Hazel", "Eliezer", "Natalia", "Jermaine", "Elisa", "Kayla", "Antonette", "Ariel", "Caterina", "Irwin", "Kaitlin", "Candace", "Allene", 
    "Rafaela");

    $q = $_GET["stringa"];
    $response = "";
    $risposta = "";

    if (strlen($q) > 0) {
    
        for ($i = 0; $i < count($a); $i++) { 
            
            if (strtolower($q) == strtolower(substr($a[$i], 0, strlen($q)))) {
                $risposta .= $a[$i] . "<br>";
            }
        
        }
    }

    if ($risposta == "") {
        $response = "Nessun nome trovato";
    } else{
        $response = $risposta;
    }

    echo $response;    
?>