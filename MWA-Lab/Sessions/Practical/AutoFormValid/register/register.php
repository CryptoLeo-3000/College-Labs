<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="register.css">
    <title>Register Output</title>
</head>
<body>
    Welcome <?php echo $_POST["Name"]; ?><br>
    Your email address is: <?php echo $_POST["Email"]; ?><br>
    Your age: <?php echo $_POST["Age"]; ?><br>
    Password you entered: <?php echo $_POST["Password"]; ?><br>
    Your phone number: +91-<?php echo $_POST["Phone"]; ?><br>
    Course: <?php echo $_POST["Subject"]; ?><br>
</body>
</html>