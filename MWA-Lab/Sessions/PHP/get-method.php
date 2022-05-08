<?php
if($_GET["name"]||$_GET["age"]) {
    echo "Welcome". $_GET. "<br />";
    echo "You are ".$_GET['age']."years old";
    exit();
}
?>

<html>
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>GET Method</title>
</head>
<body>
    <form action="<?php $_PHP_SELF ?>" method="GET">
    Name: <input type="text" name="name" id="">
    Age: <input type="text" name="age" id="">
</form>
</body>
</html>