<!-- Program to read and write file. Pointer starts at beginning of file -->
<?php
$myfile = fopen("file.txt", "r+") or die("Unable to open file!");
echo fread($myfile,filesize("file.txt"));
$txt = "Kartik Padave\n20\npadavekartik@gmail.com";
fwrite($myfile, $txt);
echo fread($myfile,filesize("file.txt"));
fclose($myfile);
?>