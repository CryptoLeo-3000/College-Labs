<!-- Program to read and write file. Pointer starts at beginning of file -->
<?php
$myfile = fopen("file.txt", "w+") or die("Unable to open file!");
$txt = "Kartik Padave\n20\npadavekartik@gmail.com";
echo fread($myfile,filesize("file.txt"));
fwrite($myfile, $txt);
fclose($myfile);
?>