<?php
$username = $password = "";

if ($_SERVER["REQUEST_METHOD"] == "POST") {
  $username = test_input($_POST["Uname"]);
  $password = test_input($_POST["Password"]);
}

function test_input($data) {
  $data = trim($data);
  $data = stripslashes($data);
  $data = htmlspecialchars($data);
  return $data;
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="login.css">
    <title>Login Form</title>
</head>
<body>
    <div>
        <h1>Login Form</h1>
        <form name="LogForm" action="<?php echo htmlspecialchars($_SERVER['PHP_SELF']);?>" method="post">
            <p>Username:
                <br>
                <input type="text" name="Uname" id="Uname"/>
            </p>
            <p id="uname-demo" class="demos"></p>

            <p>Password:
                <br>
                <input type="password" name="Password" id="Upassword"/>
            </p>
            <p id="pass-demo" class="demos"></p>
            
            <p>
                <input class="submit-btn buttons" type="submit" value="Login" name="Submit"/>
            </p>
        </form>
    </div>

    <?php
    echo "<h2>Your Input:</h2>";
    echo $username;
    echo "<br>";
    echo $password;
    ?>
</body>
</html>