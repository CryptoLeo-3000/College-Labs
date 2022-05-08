<?php
$myfile = fopen('file.txt', 'r') or die("Unable to open file!");
while(!feof($myfile)) {
    echo fgetc($myfile)."<br>";
}
fclose($myfile);
?>