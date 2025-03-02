<?php
require_once "Aksesoris.php";
class Baju extends Aksesoris {
    private $untuk = '';
    private $size = '';
    private $merk = '';

    public function __construct($id = '', $namaProduk = '', $hargaProduk = 0, $stokProduk = 0, $fotoProduk = '', $jenis = '', $bahan = '', $warna = '', $untuk = '', $size = '', $merk = '') {
        parent::__construct($id, $namaProduk, $hargaProduk, $stokProduk, $fotoProduk, $jenis, $bahan, $warna);
        $this->untuk = $untuk;
        $this->size = $size;
        $this->merk = $merk;
    }

    public function getUntuk() {
        return $this->untuk;
    }

    public function setUntuk($untuk) {
        $this->untuk = $untuk;
    }

    public function getSize() {
        return $this->size;
    }

    public function setSize($size) {
        $this->size = $size;
    }

    public function getMerk() {
        return $this->merk;
    }

    public function setMerk($merk) {
        $this->merk = $merk;
    }

    public function add($id, $namaProduk, $hargaProduk, $stokProduk, $fotoProduk, $jenis, $bahan, $warna, $untuk, $size, $merk)
    {
        $temp = new Baju();
        $temp->setId($id);
        $temp->setNamaProduk($namaProduk);
        $temp->setHargaProduk($hargaProduk);
        $temp->setStokProduk($stokProduk);
        $temp->setFotoProduk($fotoProduk);
        $temp->setJenis($jenis);
        $temp->setBahan($bahan);
        $temp->setWarna($warna);
        $temp->setUntuk($untuk);
        $temp->setSize($size);
        $temp->setMerk($merk);

        return $temp;
    }

    public function __destruct(){}

    public function show($ls) {
        echo "<table border='1'>";
            echo "<thead>";
                echo "<th>ID</th>";
                echo "<th>Nama</th>";
                echo "<th>Harga</th>";
                echo "<th>Stok</th>";
                echo "<th>Jenis</th>";
                echo "<th>Bahan</th>";
                echo "<th>Warna</th>";
                echo "<th>Untuk</th>";
                echo "<th>Size</th>";
                echo "<th>Merk</th>";
                echo "<th>Gambar</th>";
            echo "</thead>";
            
            echo "<tbody>";
                foreach ($ls as $data) {
                echo "<tr>";
                    echo "<td>" . $data->getID() . "</td>";
                    echo "<td>" . $data->getNamaProduk() . "</td>";
                    echo "<td>" . $data->getHargaProduk() . "</td>";
                    echo "<td>" . $data->getStokProduk() . "</td>";
                    echo "<td>" . $data->getJenis() . "</td>";
                    echo "<td>" . $data->getBahan() . "</td>";
                    echo "<td>" . $data->getWarna() . "</td>";
                    echo "<td>" . $data->getUntuk() . "</td>";
                    echo "<td>" . $data->getSize() . "</td>";
                    echo "<td>" . $data->getMerk() . "</td>";
                    echo "<td><img src='img/" . $data->getFotoProduk() . "' width='100'/></td>";

                echo "</tr>";
                }
            echo "</tbody>";
        echo "</table>";
        echo "<br>";
    }
}
?>