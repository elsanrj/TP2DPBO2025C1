#include "Aksesoris.cpp"

using namespace std;

class Baju : public Aksesoris
{
    private:
        string untuk, size, merk;

    public:
        Baju()
        {
            this->untuk = "";
            this->size = "";
            this->merk = "";
        }

        Baju(string untuk, string size, string merk)
        {
            this->untuk = untuk;
            this->size = size;
            this->merk = merk;
        }

        string getUntuk()
        {
            return untuk;
        }

        void setUntuk(string untuk)
        {
            this->untuk = untuk;
        }

        string getSize()
        {
            return size;
        }

        void setSize(string size)
        {
            this->size = size;
        }

        string getMerk()
        {
            return merk;
        }

        void setMerk(string merk)
        {
            this->merk = merk;
        }

        void add(list<Baju>& ls, string id, string namaProduk, int hargaProduk, int stokProduk, string jenis,
                string bahan, string warna, string untuk, string size, string merk)
        {
            Baju temp;
            temp.setId(id);
            temp.setNamaProduk(namaProduk);
            temp.setHargaProduk(hargaProduk);
            temp.setStokProduk(stokProduk);
            temp.setJenis(jenis);
            temp.setBahan(bahan);
            temp.setWarna(warna);
            temp.setUntuk(untuk);
            temp.setSize(size);
            temp.setMerk(merk);

            ls.push_back(temp);
        }

        int getDigit(int angka)
        {
            int num, digit = 0;
            num = angka;
            while (num != 0)
            {
                num = num / 10;
                digit++;
            }
            return digit;
        }

        void spasi(int max, int len)
        {
            for (int i = 0; i <= max - len; i++)
            {
                cout << " ";
            }
        }

        void garis(int max)
        {
            cout << "+";
            for (int i = 0; i < max + 29; i++)
            {
                cout << "-";
            }
            cout << ("+") << endl;
        }

        void show(list<Baju> ls)
        {
            string h1, h2, h3, h4, h5, h6, h7, h8, h9, h10;
            int max1, max2, max3, max4, max5, max6, max7, max8, max9, max10;
            h1 = "ID";
            h2 = "Nama";
            h3 = "Harga";
            h4 = "Stok";
            h5 = "Jenis";
            h6 = "Bahan";
            h7 = "Warna";
            h8 = "Untuk";
            h9 = "Size";
            h10 = "Merk";
            max1 = h1.length();
            max2 = h2.length();
            max3 = h3.length();
            max4 = h4.length();
            max5 = h5.length();
            max6 = h6.length();
            max7 = h7.length();
            max8 = h8.length();
            max9 = h9.length();
            max10 = h10.length();
            for (Baju baju : ls)
            {
                if (baju.getId().length() > max1)
                {
                    max1 = baju.getId().length();
                }
                if (baju.getNamaProduk().length() > max2)
                {
                    max2 = baju.getNamaProduk().length();
                }
                if (getDigit(baju.getHargaProduk()) > max3)
                {
                    max3 = getDigit(baju.getHargaProduk());
                }
                if (getDigit(baju.getStokProduk()) > max4)
                {
                    max4 = getDigit(baju.getStokProduk());
                }
                if (baju.getJenis().length() > max5)
                {
                    max5 = baju.getJenis().length();
                }
                if (baju.getBahan().length() > max6)
                {
                    max6 = baju.getBahan().length();
                }
                if (baju.getWarna().length() > max7)
                {
                    max7 = baju.getWarna().length();
                }
                if (baju.getUntuk().length() > max8)
                {
                    max8 = baju.getUntuk().length();
                }
                if (baju.getSize().length() > max9)
                {
                    max9 = baju.getSize().length();
                }
                if (baju.getMerk().length() > max10)
                {
                    max10 = baju.getMerk().length();
                }
            }

            garis(max1 + max2 + max3 + max4 + max5 + max6 + max7 + max8 + max9 + max10);
            cout << "| " << h1;
            spasi(max1, h1.length());
            cout << "| " << h2;
            spasi(max2, h2.length());
            cout << "| " << h3;
            spasi(max3, h3.length());
            cout << "| " << h4;
            spasi(max4, h4.length());
            cout << "| " << h5;
            spasi(max5, h5.length());
            cout << "| " << h6;
            spasi(max6, h6.length());
            cout << "| " << h7;
            spasi(max7, h7.length());
            cout << "| " << h8;
            spasi(max8, h8.length());
            cout << "| " << h9;
            spasi(max9, h9.length());
            cout << "| " << h10;
            spasi(max10, h10.length());
            cout << "|" << endl;
            garis(max1 + max2 + max3 + max4 + max5 + max6 + max7 + max8 + max9 + max10);
            for (Baju baju : ls)
            {
                cout << "| " << baju.getId();
                spasi(max1, baju.getId().length());
                cout << "| " << baju.getNamaProduk();
                spasi(max2, baju.getNamaProduk().length());
                cout << "| " << baju.getHargaProduk();
                spasi(max3, getDigit(baju.getHargaProduk()));
                cout << "| " << baju.getStokProduk();
                spasi(max4, getDigit(baju.getStokProduk()));
                cout << "| " << baju.getJenis();
                spasi(max5, baju.getJenis().length());
                cout << "| " << baju.getBahan();
                spasi(max6, baju.getBahan().length());
                cout << "| " << baju.getWarna();
                spasi(max7, baju.getWarna().length());
                cout << "| " << baju.getUntuk();
                spasi(max8, baju.getUntuk().length());
                cout << "| " << baju.getSize();
                spasi(max9, baju.getSize().length());
                cout << "| " << baju.getMerk();
                spasi(max10, baju.getMerk().length());
                cout << "|" << endl;
            }
            garis(max1 + max2 + max3 + max4 + max5 + max6 + max7 + max8 + max9 + max10);
        }
};
