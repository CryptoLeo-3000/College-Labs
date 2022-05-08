<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>PHP Session 8</title>
</head>
<body>
    <?php
    $preferences = array ("red", "white", "blue", "silver", "aqua", "cyan", "yellow");

    array_push($preferences, "black", "gold");
    echo("Array after push:");
    foreach ($preferences as $value) {
        echo("<li> This preference is $value");
    }
    
    array_unshift($preferences, "black");
    echo("<br>Array after unshift:");
    foreach ($preferences as $value) {
        echo("<li> This preference is $value");
    }

    array_shift($preferences);
    echo("<br>Array after shift:");
    foreach ($preferences as $value) {
        echo("<li> This preference is $value");
    }

    array_pop($preferences);
    echo("<br>Array after pop:");
    foreach ($preferences as $value) {
        echo("<li> This preference is $value");
    }
    ?>
</body>
</html>