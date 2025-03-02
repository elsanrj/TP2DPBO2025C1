<?php

class Petshop {
    private $id = '';
    private $namaProduk = '';
    private $hargaProduk = 0;
    private $stokProduk = 0;
    private $fotoProduk = '';

    public function __construct($id = '', $namaProduk = '', $hargaProduk = 0, $stokProduk = 0, $fotoProduk = '')
    {
        $this->id = $id;
        $this->namaProduk = $namaProduk;
        $this->hargaProduk = $hargaProduk;
        $this->stokProduk = $stokProduk;
        $this->fotoProduk = $fotoProduk;
    }

    public function getId() {
        return $this->id;
    }

    public function setId($id) {
        $this->id = $id;
    }

    public function getNamaProduk() {
        return $this->namaProduk;
    }

    public function setNamaProduk($namaProduk) {
        $this->namaProduk = $namaProduk;
    }

    public function getHargaProduk() {
        return $this->hargaProduk;
    }

    public function setHargaProduk($hargaProduk) {
        $this->hargaProduk = $hargaProduk;
    }

    public function getStokProduk() {
        return $this->stokProduk;
    }

    public function setStokProduk($stokProduk) {
        $this->stokProduk = $stokProduk;
    }

    public function getFotoProduk() {
        return $this->fotoProduk;
    }

    public function setFotoProduk($fotoProduk) {
        $this->fotoProduk = $fotoProduk;
    }

    public function __destruct(){}
}
?>