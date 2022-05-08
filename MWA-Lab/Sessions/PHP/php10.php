<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>PHP Session 10</title>
</head>
<body>
    <?php
    $x = "NMIMS";
    $y = "STME";
    $z = "Computer";
    $a = 55;
    $b = 100;

    function concatenate() {
        global $x, $y, $z;
        return $x.$y.$z;
    }

    function add() {
        $GLOBALS['b'] = $GLOBALS['a'] + $GLOBALS['b'];
    }

    echo concatenate();
    echo"\n";
    add();
    echo $b;
    ?>
</body>
</html>