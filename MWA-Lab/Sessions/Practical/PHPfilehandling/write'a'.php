<!-- Program to write from the end in file.txt with pointer at end. Create new file if does not exist -->
<?php
$myfile = fopen("file.txt", "r") or die("Unable to open file!");
echo fread($myfile,filesize("file.txt"));
fclose($myfile);
echo "<br>";

$awrite = fopen("file.txt", "a") or die("Unable to open file!");
$txt = "\nKartik Padave\n20\npadavekartik@gmail.com";
fwrite($awrite, $txt);
fclose($awrite);

$myfile = fopen("file.txt", "r") or die("Unable to open file!");
echo fread($myfile,filesize("file.txt"));
fclose($myfile);
?>