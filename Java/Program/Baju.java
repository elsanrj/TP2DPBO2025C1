package Program;
import java.util.ArrayList;

public class Baju extends Aksesoris {
    private String untuk;
    private String size;
    private String merk;

    public Baju() {
        this.untuk = "";
        this.size = "";
        this.merk = "";
    }

    public Baju(String untuk, String size, String merk) {
        this.untuk = untuk;
        this.size = size;
        this.merk = merk;
    }

    public String getUntuk() {
        return untuk;
    }

    public void setUntuk(String untuk) {
        this.untuk = untuk;
    }

    public String getSize() {
        return size;
    }

    public void setSize(String size) {
        this.size = size;
    }

    public String getMerk() {
        return merk;
    }

    public void setMerk(String merk) {
        this.merk = merk;
    }

    public void add(ArrayList<Baju> ls, String id, String namaProduk, int hargaProduk, int stokProduk, String jenis,
            String bahan, String warna, String untuk, String size, String merk) {
        Baju temp = new Baju();
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

        ls.add(temp);
    }

    public int getDigit(int angka)
    {
        int num, digit = 0;
        num = angka;
        while (num != 0) {
            num = num / 10;
            digit++;
        }
        return digit;
    }

    public void spasi(int max, int len)
    {
        for (int i = 0; i <= max - len; i++) {
            System.out.print(" ");
        }
    }

    public void garis(int max)
    {
        System.out.print("+");
        for (int i = 0; i < max + 29; i++) {
            System.out.print("-");
        }
        System.out.println("+");
    }

    public void show(ArrayList<Baju> ls) {
        String h1, h2, h3, h4, h5, h6, h7, h8, h9, h10;
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
        for (Baju baju : ls) {
            if (baju.getId().length() > max1) {
                max1 = baju.getId().length();
            }
            if (baju.getNamaProduk().length() > max2) {
                max2 = baju.getNamaProduk().length();
            }
            if (getDigit(baju.getHargaProduk()) > max3) {
                max3 = getDigit(baju.getHargaProduk());
            }
            if (getDigit(baju.getStokProduk()) > max4) {
                max4 = getDigit(baju.getStokProduk());
            }
            if (baju.getJenis().length() > max5) {
                max5 = baju.getJenis().length();
            }
            if (baju.getBahan().length() > max6) {
                max6 = baju.getBahan().length();
            }
            if (baju.getWarna().length() > max7) {
                max7 = baju.getWarna().length();
            }
            if (baju.getUntuk().length() > max8) {
                max8 = baju.getUntuk().length();
            }
            if (baju.getSize().length() > max9) {
                max9 = baju.getSize().length();
            }
            if (baju.getMerk().length() > max10) {
                max10 = baju.getMerk().length();
            }
        }

        garis(max1 + max2 + max3 + max4 + max5 + max6 + max7 + max8 + max9 + max10);
        System.out.print("| " + h1);
        spasi(max1, h1.length());
        System.out.print("| " + h2);
        spasi(max2, h2.length());
        System.out.print("| " + h3);
        spasi(max3, h3.length());
        System.out.print("| " + h4);
        spasi(max4, h4.length());
        System.out.print("| " + h5);
        spasi(max5, h5.length());
        System.out.print("| " + h6);
        spasi(max6, h6.length());
        System.out.print("| " + h7);
        spasi(max7, h7.length());
        System.out.print("| " + h8);
        spasi(max8, h8.length());
        System.out.print("| " + h9);
        spasi(max9, h9.length());
        System.out.print("| " + h10);
        spasi(max10, h10.length());
        System.out.println("|");
        garis(max1 + max2 + max3 + max4 + max5 + max6 + max7 + max8 + max9 + max10);
        for (Baju baju : ls) {
            System.out.print("| " + baju.getId());
            spasi(max1, baju.getId().length());
            System.out.print("| " + baju.getNamaProduk());
            spasi(max2, baju.getNamaProduk().length());
            System.out.print("| " + baju.getHargaProduk());
            spasi(max3, getDigit(baju.getHargaProduk()));
            System.out.print("| " + baju.getStokProduk());
            spasi(max4, getDigit(baju.getStokProduk()));
            System.out.print("| " + baju.getJenis());
            spasi(max5, baju.getJenis().length());
            System.out.print("| " + baju.getBahan());
            spasi(max6, baju.getBahan().length());
            System.out.print("| " + baju.getWarna());
            spasi(max7, baju.getWarna().length());
            System.out.print("| " + baju.getUntuk());
            spasi(max8, baju.getUntuk().length());
            System.out.print("| " + baju.getSize());
            spasi(max9, baju.getSize().length());
            System.out.print("| " + baju.getMerk());
            spasi(max10, baju.getMerk().length());
            System.out.println("|");
        }
        garis(max1 + max2 + max3 + max4 + max5 + max6 + max7 + max8 + max9 + max10);
    }
}
