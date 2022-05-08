<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>PHP Session 2</title>
</head>
<body>
    <?php
    $Today = date("l F d, Y");
    print("Today is $Today");
    $Today = date("L");
    
    if($Today == 1) {
        print("<br>This year is a leap year !");
    }
    else {
        print("<br>This year is not a leap year !");
    }
    ?>
</body>
</html>