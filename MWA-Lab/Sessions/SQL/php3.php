<?php
$servername = "localhost";
$username = "username";
$password = "password";
$dbname = "mwa-lab";
$conn = new mysqli($servername, $username, $password, $dbname);

if ($conn->connect_error) {
  die("Connection failed: ".$conn->connect_error);
}

$sql = "INSERT INTO MyGuests (firstname, lastname, email) VALUES (NULL, 'University', 'info@nmims.edu')";

if ($conn->query($sql) === TRUE) {
  echo "New record created successfully";
} else {
  echo "Error: ".$sql."<br>".$conn->error;
}

$conn->close();
?>