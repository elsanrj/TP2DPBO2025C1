<?php

include "Petshop.php";
include "Aksesoris.php";
include "Baju.php";

$obaju = new Baju();

$ls[] = $obaju->add("001", "SweaterAnjingWinter", 35000, 20, "anjingsweater.jpeg","Sweater", "Wol", "Merah", "Anjing", "M", "PawComfort");
$ls[] = $obaju->add("002", "JasHujanAnjing", 15000, 10, "anjinghujan.jpg", "JasHujan", "PVC", "Transparan", "Anjing", "S", "RainyMeow");
$ls[] = $obaju->add("003", "HoodieKucingFreefire", 18000, 18, "kucinghoodie.jpeg" ,"Hoodie", "Fleece", "Merah", "Kucing", "M", "KittyChic");
$ls[] = $obaju->add("004", "SeragamIndomaretKucing", 35000, 8, "kucingindomaret.jpg", "Kostum", "Katun", "Biru", "Kucing", "M", "FancyFur");
$ls[] = $obaju->add("005", "OnesieDinoAnjing", 25000, 25, "anjingdino.jpeg", "Kostum", "Wol", "Hijau", "Anjing", "M", "CozyPaws");
$ls[] = $obaju->add("007", "BajuPantaiAnjing", 28000, 20, "anjingpantai.jpeg", "Kemeja", "Katun", "Pink", "Anjing", "L", "FitPup");
$ls[] = $obaju->add("006", "BajuKokoKucing", 24000, 15, "kucingkoko.jpg", "Kemeja", "Linen", "Putih", "Kucing", "XL", "HiMeo");
$ls[] = $obaju->add("008", "KostumPocongKucing", 17000, 22, "kucingpocong.png", "Kostum", "Katun", "Putih", "Kucing", "S", "HeyMiau");

$obaju->show($ls);

?>