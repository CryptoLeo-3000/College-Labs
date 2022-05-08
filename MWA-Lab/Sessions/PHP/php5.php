<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>PHP Session 5</title>
</head>
<body>
    <?php
    for($i=0; $i<=5; $i++) {
        if($i == 2) {
            continue;
        }
        print("$i<br>");
        if($i == 4) {
            break;
        }
    }
    ?>
</body>
</html>