<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>PHP Session 6</title>
</head>
<body>
    <?php
    $cars = array (
        array("Volvo", 22, 18),
        array("BMW", 15, 13),
        array("Saab", 5, 2),
        array("Land Rover", 17, 15)
    );

    echo $cars[0][0]." : In Stock : ".$cars[0][1].", sold ".$cars[0][2]."<br>";
    echo $cars[1][0]." : In Stock : ".$cars[1][1].", sold ".$cars[1][2]."<br>";
    echo $cars[2][0]." : In Stock : ".$cars[2][1].", sold ".$cars[2][2]."<br>";
    echo $cars[3][0]." : In Stock : ".$cars[3][1].", sold ".$cars[3][2]."<br>";
    ?>
</body>
</html>