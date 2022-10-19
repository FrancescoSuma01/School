<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Capitali</title>
</head>
<body>
    
    <h1><center>Le Capitali</center></h1>

    <?php

        $capitali = array( "Italy"=>"Rome", "Luxembourg"=>"Luxembourg", "Belgium"=> "Brussels", "Denmark"=>"Copenhagen", "Finland"=>"Helsinki", "France" => "Paris", "Slovakia"=>"Bratislava", "Slovenia"=>"Ljubljana", "Germany" => "Berlin", "Greece" => "Athens", "Ireland"=>"Dublin", "Netherlands"=>"Amsterdam", "Portugal"=>"Lisbon", "Spain"=>"Madrid", "Sweden"=>"Stockholm", "United Kingdom"=>"London", "Cyprus"=>"Nicosia", "Lithuania"=>"Vilnius", "Czech Republic"=>"Prague", "Estonia"=>"Tallin", "Hungary"=>"Budapest", "Latvia"=>"Riga", "Malta"=>"Valetta", "Austria" => "Vienna", "Poland"=>"Warsaw");

        echo "<h2>Le Capitali non ordinate</h2>";

        echo "<table>";
        foreach($capitali as $key=>$value):

            echo "<tr><td>$key</td><td>$value</td></tr>";

        endforeach;
        echo "</table>";
        echo"<br>";

    ?>

    <?php

        echo "<h2>Le Capitali ordinate</h2>";

        asort($capitali);

        echo "<table>";
        foreach($capitali as$key=>$value):

            echo "<tr><td>$key</td><td>$value</td></tr>";

        endforeach;
        echo "</table";

    ?>

</body>
</html>