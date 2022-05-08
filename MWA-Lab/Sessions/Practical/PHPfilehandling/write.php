<!-- Program to write in file.txt with file at beginning -->
<?php
$rfile = fopen("file.txt", "r") or die("Unable to open file!");
echo fread($rfile,filesize("file.txt"));
fclose($rfile);
echo "<br>";

$wfile = fopen("file.txt", "w") or die("Unable to open file!");
$txt = "Kartik Padave\n20\npadavekartik@gmail.com";
fwrite($wfile, $txt);
fclose($wfile);

$rrfile = fopen("file.txt", "r") or die("Unable to open file!");
echo fread($rrfile,filesize("file.txt"));
fclose($rrfile);
?>