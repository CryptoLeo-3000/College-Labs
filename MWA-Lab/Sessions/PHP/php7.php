<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>PHP Session 7</title>
</head>
<body>
    <?php
    $preferences = array ("red", "white", "blue", "silver", "aqua", "cyan", "yellow");

    echo("The current preferences are: ");

    foreach ($preferences as $value) {
        echo("<li> This preference is $value");
    }
    ?>
</body>
</html>