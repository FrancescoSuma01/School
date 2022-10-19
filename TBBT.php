<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>TBBT</title>
</head>
<body>
    
    <h1><center>The Big Bang Theory</center></h1>

    <h2>ascending order sort by value</h2>

    <?php

        $personaggi = array("Sheldon"=>"31","Leonard"=>"41","Howard"=>"39","Rajesh"=>"35");

        asort($personaggi);

        echo "<table>";
        foreach($personaggi as $key=>$value):

            echo "<tr><td>$key</td><td>$value</td></tr>";

        endforeach;
        echo "</table>";

        echo "<br>";

    ?>

    <h2>ascending order sort by Key</h2>

    <?php

        ksort($personaggi);

        echo "<table>";
        foreach($personaggi as $key=>$value):

            echo "<tr><td>$key</td><td>$value</td></tr>";

        endforeach;
        echo "</table>";

    ?>

    <h2>descending order sorting by Value</h2>

    <?php

        arsort($personaggi);

        echo "<table>";
        foreach($personaggi as $key=>$value):

            echo "<tr><td>$key</td><td>$value</td></tr>";

        endforeach;
        echo "</table>";

        echo "<br>";

    ?>

    <h2>descending order sorting by Key</h2>

    <?php

        krsort($personaggi);

        echo "<table>";
        foreach($personaggi as $key=>$value):

            echo "<tr><td>$key</td><td>$value</td></tr>";

        endforeach;
        echo "</table>";

    ?>

</body>
</html>