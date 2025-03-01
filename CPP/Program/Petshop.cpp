#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Petshop
{
    private:
        string id, namaProduk;
        int hargaProduk, stokProduk;

    public:
        Petshop()
        {
            this->id = "";
            this->namaProduk = "";
            this->hargaProduk = 0;
            this->stokProduk = 0;
        }

        Petshop(string id, string namaProduk, int hargaProduk, int stokProduk)
        {
            this->id = id;
            this->namaProduk = namaProduk;
            this->hargaProduk = hargaProduk;
            this->stokProduk = stokProduk;
        }

        string getId()
        {
            return id;
        }

        void setId(string id)
        {
            this->id = id;
        }

        string getNamaProduk()
        {
            return namaProduk;
        }

        void setNamaProduk(string namaProduk)
        {
            this->namaProduk = namaProduk;
        }

        int getHargaProduk()
        {
            return hargaProduk;
        }

        void setHargaProduk(int hargaProduk)
        {
            this->hargaProduk = hargaProduk;
        }

        int getStokProduk()
        {
            return stokProduk;
        }

        void setStokProduk(int stokProduk)
        {
            this->stokProduk = stokProduk;
        }
    ~Petshop(){}
};