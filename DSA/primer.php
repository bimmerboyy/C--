<?php
$osoba = array(
    "ime" => "Nikola",
    "prezime" => "Maktović",
    "godine" => 2002,
    "ima_devojku"  => true,
    "normalan" => false,
    "prijatelji" => array("tarik", "ermin", "bahir"));
    
foreach($osoba as $kljuc => $vrednost){
    echo $kljuc . " : " . $vrednost . "\n";
}