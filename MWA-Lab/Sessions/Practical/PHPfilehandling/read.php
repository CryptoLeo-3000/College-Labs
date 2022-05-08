<!-- Program to read contents of file.txt with pointer at beginning of file-->
<?php
$myfile = fopen("file.txt", "r") or die("Unable to open file!");
echo fread($myfile,filesize("file.txt"));
fclose($myfile);
?>