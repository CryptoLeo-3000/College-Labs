<?php
$myfile = fopen('file.txt', 'r') or die("Unable to open file!");
echo fread($myfile, filesize('file.txt'));
echo filesize('file.txt');
fclose($myfile);
?>