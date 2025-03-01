package Program;
import java.util.Scanner;
import java.util.ArrayList;

public class Main {
    public static void main(String[] args)
    {
        Baju obaju = new Baju();
        ArrayList<Baju> ls = new ArrayList<Baju>();

        obaju.add(ls, "001", "SweaterAnjingWinter", 35000, 20, "Sweater", "Wol", "Merah", "Anjing", "M", "PawComfort");
        obaju.add(ls, "002", "JaketKucingLabubu", 25000, 15, "Jaket", "Polyester", "Biru", "Kucing", "S", "MeowWear");
        obaju.add(ls, "003", "KaosAnjingSkibidi", 27000, 30, "Kaos", "Katun", "Kuning", "Anjing", "L", "PupStyle");
        obaju.add(ls, "004", "HoodieKucingFreefire", 18000, 18, "Hoodie", "Fleece", "Hitam", "Kucing", "M", "KittyChic");
        obaju.add(ls, "005", "RompiAnjingSporty", 32000, 12, "Rompi", "Nylon", "Hijau Army", "Anjing", "XL", "BarkFit");

        Scanner sc = new Scanner(System.in);
        String id, namaProduk, jenis, bahan, warna, untuk, size, merk;
        int hargaProduk, stokProduk;

        int n = 0;
        n = sc.nextInt();
        for (int i = 0; i < n; i++)
        {
            id = sc.next();
            namaProduk = sc.next();
            hargaProduk = sc.nextInt();
            stokProduk = sc.nextInt();
            jenis = sc.next();
            bahan = sc.next();
            warna = sc.next();
            untuk = sc.next();
            size = sc.next();
            merk = sc.next();

            obaju.add(ls, id, namaProduk, hargaProduk, stokProduk, jenis, bahan, warna, untuk, size, merk);
        }
        obaju.show(ls);

        sc.close();
    }
}
