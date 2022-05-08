<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>PHP Session 3</title>
</head>
<body>
    <?php
    $Today = date("l F d, Y");
    print("Today is $Today, <br>\n");
    $diaryDate = date("d");
    
    switch(diaryDate) {
        case 03: print("meeting");
        break;
        case 10: print("appointment");
        break;
        case 23: print("club");
        break;
        case 25: print("conference");
        break;
        default: print("nothing");
    }
    ?>
</body>
</html>