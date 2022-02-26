<?php
include "Pc.php";
// buat objek oProcie, oDisk, dan oRam
$objProcie = new Processor("Intel i9 5900K", 12000420);
$objDisk = new Disk("SSD", "4232 TB", 612312);
$objRam = new Ram("69 GB", 5234123);

$total = $objProcie->getPrice() + $objDisk->getPrice() + $objRam->getPrice(); // sum
$computer = new Pc($objProcie, $objDisk, $objRam, $total); 
$computer->printComputer();
?>