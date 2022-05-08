<?php
if($_POST["username"] || $_POST["password"]) {
    echo "Welcome ". $_POST['username']."<br/>";
    echo "Your registered Email ID is ".$_POST['emailid']."<br/>";
    echo "And your password is ".$_POST['password']."<br/>";
    exit();
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Registeration Page</title>
</head>
<body>    
<h2>Registeration Form</h2>
<form id="formID" action="<?php $_PHP_SELF ?>" method="POST">
    <div class="form-group">
        <label>Username:</label>
        <input type="text" name="username">
    </div>
    
    <div class="form-group">
        <label>Password:</label>
        <input type="password" name="password">
    </div>
    
    <div class="form-group">
        <input type="submit"/>
    </div>
</form>

<p>Click here to <a href='Register.php'>Register</a></p>
</body>
</html>