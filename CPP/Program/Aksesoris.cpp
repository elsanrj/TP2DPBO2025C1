#include "Petshop.cpp"

using namespace std;

class Aksesoris : public Petshop
{
    private:
        string jenis, bahan, warna;

    public:
        Aksesoris()
        {
            this->jenis = "";
            this->bahan = "";
            this->warna = "";
        }

        Aksesoris(string jenis, string bahan, string warna)
        {
            this->jenis = jenis;
            this->bahan = bahan;
            this->warna = warna;
        }

        string getJenis()
        {
            return jenis;
        }

        void setJenis(string jenis)
        {
            this->jenis = jenis;
        }

        string getBahan()
        {
            return bahan;
        }

        void setBahan(string bahan)
        {
            this->bahan = bahan;
        }

        string getWarna()
        {
            return warna;
        }

        void setWarna(string warna)
        {
            this->warna = warna;
        }

        ~Aksesoris(){

        }
};