#include "Baju.cpp"

using namespace std;

int main()
{
    Baju obaju;
    list<Baju> ls;

    obaju.add(ls, "001", "SweaterAnjingWinter", 35000, 20, "Sweater", "Wol", "Merah", "Anjing", "M", "PawComfort");
    obaju.add(ls, "002", "JaketKucingLabubu", 25000, 15, "Jaket", "Polyester", "Biru", "Kucing", "S", "MeowWear");
    obaju.add(ls, "003", "KaosAnjingSkibidi", 27000, 30, "Kaos", "Katun", "Kuning", "Anjing", "L", "PupStyle");
    obaju.add(ls, "004", "HoodieKucingFreefire", 18000, 18, "Hoodie", "Fleece", "Hitam", "Kucing", "M", "KittyChic");
    obaju.add(ls, "005", "RompiAnjingSporty", 32000, 12, "Rompi", "Nylon", "Hijau Army", "Anjing", "XL", "BarkFit");

    string id, namaProduk, jenis, bahan, warna, untuk, size, merk;
    int hargaProduk, stokProduk;

    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> id >> namaProduk >> hargaProduk >> stokProduk >> jenis >> bahan >> warna >> untuk >> size >> merk;

        obaju.add(ls, id, namaProduk, hargaProduk, stokProduk, jenis, bahan, warna, untuk, size, merk);
    }
    obaju.show(ls);
    return 0;
}