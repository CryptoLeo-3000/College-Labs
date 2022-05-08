<?php
$myfile = fopen('file.txt', 'w') or die("Unable to open file!");
$txt = "NMIMS\n";
fwrite($myfile, $txt);
$txt = "STME\n";
fwrite($myfile, $txt);
fclose($myfile);
?>