<!-- Program to create file for write only. Gives error if file exists -->
<?php
$myfile = fopen("file-x.txt", "x") or die("Unable to open file!");
$txt = "\nKartik Padave\n20\npadavekartik@gmail.com";
fwrite($myfile, $txt);
fclose($myfile);

$myfile = fopen("file-x.txt", "r") or die("Unable to open file!");
echo fread($myfile,filesize("file-x.txt"));
fclose($myfile);
?>