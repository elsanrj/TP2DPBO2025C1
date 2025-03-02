from Baju import Baju

obaju = Baju()
ls = []

ls.append(Baju("001", "SweaterAnjingWinter", 35000, 20, "Sweater", "Wol", "Merah", "Anjing", "M", "PawComfort"))
ls.append(Baju("002", "JaketKucingLabubu", 25000, 15, "Jaket", "Polyester", "Biru", "Kucing", "S", "MeowWear"))
ls.append(Baju("003", "KaosAnjingSkibidi", 27000, 30, "Kaos", "Katun", "Kuning", "Anjing", "L", "PupStyle"))
ls.append(Baju("004", "HoodieKucingFreefire", 18000, 18, "Hoodie", "Fleece", "Hitam", "Kucing", "M", "KittyChic"))
ls.append(Baju("005", "RompiAnjingSporty", 32000, 12, "Rompi", "Nylon", "Hijau", "Anjing", "XL", "BarkFit"))

n = int(input())
for i in range(n):
    id = input()
    namaProduk = input()
    hargaProduk = int(input())
    stokProduk = int(input())
    jenis = input()
    bahan = input()
    warna = input()
    untuk = input()
    size = input()
    merk = input()
    
    ls.append(Baju(id, namaProduk, hargaProduk, stokProduk, jenis, bahan, warna, untuk, size, merk))
obaju.show(ls)
