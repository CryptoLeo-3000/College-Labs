<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "registerformdetails";

// Create connection
$conn = mysqli_connect($servername, $username, $password, $dbname);
// Check connection
if (!$conn) {
  die("Connection failed: " . mysqli_connect_error());
}

// sql to create table
$sql = "CREATE TABLE Details (
    id INT(6) UNSIGNED AUTO_INCREMENT PRIMARY KEY,
    fullname VARCHAR(30) NOT NULL,
    email VARCHAR(50),
    age INT(6) PRIMARY KEY,
    passwordconfirm VARCHAR(30) NOT NULL,
    phoneno INT(6),
    course VARCHAR(50)
)";

if (mysqli_query($conn, $sql)) {
  echo "Table MyGuests created successfully";
} else {
  echo "Error creating table: " . mysqli_error($conn);
}

$sql = "INSERT INTO Details (fullname, email, age, passwordconfirm, phoneno, course)
VALUES ('Simran Kumari', 'dkjsvbjksdbgjrbgj@gmail.com', '12', 'pass123@', '7463772627', 'B.Tech.')";

if ($conn->query($sql) === TRUE) {
  echo "New record created successfully";
} else {
  echo "Error: " . $sql . "<br>" . $conn->error;
}

$sql = "UPDATE Details SET email = 'simrankumari@gmail.com' WHERE age=12";

mysqli_close($conn);
?>