<?php
    if($_GET["username"]||$_GET["password"]) {
        echo "Welcome ".$_GET['username']."<br/>";
        echo "Your Password is ".$_GET['password']." year old.";
        exit();
    }
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Login Page</title>
</head>
<body>    
<h2>Login</h2>
<form id="formID" action="<?php $_PHP_SELF ?>" method="GET">
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
        
<p>Click here to <a href='login.php'>Login</a></p>
</body>
</html>