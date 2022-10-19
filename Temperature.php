<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    
    <h1>Temperature</h1>

    <h2>Tutti i Valori</h2>

    <?php
        
        $recordedTemperatures = "78, 60, 62, 68, 71, 68, 73, 85, 66, 64, 76, 63, 75, 76, 73, 68, 62, 73, 72, 65, 74, 62, 62, 65, 64, 68, 73, 75, 79, 73";

        $temperature = explode(", ", $recordedTemperatures);
    
        sort($temperature);

        echo "<table>";
        foreach($temperature as $key=>$value):

            echo "<tr><td>$key. </td><td>$value</td></tr>";

        endforeach;
        echo "</table>";
    
    ?>
    
    <h2>Media</h2>

    <?php

        $somma = 0;
        //$count = count($temperature);
    
        foreach($temperature as $value):

            $somma = $value + $somma;

        endforeach;

        $media = $somma / count($temperature);

        echo "La media è: " . $media;

    ?>

    <h2>Max</h2>

    <?php

        rsort($temperature);

        echo "I valori massimi sono: <br>";

        $max = $temperature[0];

        $cont = 0;
        echo $max . " ";
        for ($i=0; $i < count($temperature) && $cont < 4; $i++){
            if ($temperature[$i] < $max) {
                $max = $temperature[$i];
                echo $max . " ";
                $cont++;
            }
        }

    ?>

    <h2>Min</h2>

    <?php

        sort($temperature);

        echo "I valori minimi sono: <br>";

        $max = $temperature[0];

        $cont = 0;
        echo $max . " ";
        for ($i=0; $i < count($temperature) && $cont < 4; $i++){
            if ($temperature[$i] > $max) {
                $max = $temperature[$i];
                echo $max . " ";
                $cont++;
            }
        }

    ?>


</body>
</html>