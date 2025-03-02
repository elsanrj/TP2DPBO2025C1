from Aksesoris import Aksesoris

class Baju(Aksesoris):
    __untuk = ""
    __size = ""
    __merk = ""
    
    def __init__(self, id = "", namaProduk = "", hargaProduk = 0, stokProduk = 0, jenis = "", bahan = "", warna = "", untuk = "", size = "", merk = ""):
        super().__init__(id, namaProduk, hargaProduk, stokProduk, jenis, bahan, warna)
        self.__untuk = untuk
        self.__size = size
        self.__merk = merk
        
    def getUntuk(self):
        return self.__untuk

    def setUntuk(self, untuk):
        self.__untuk = untuk 

    def getSize(self):
        return self.__size

    def setSize(self, size):
        self.__size = size

    def getMerk(self):
        return self.__merk

    def setMerk(self, merk):
        self.__merk = merk
    
    def getDigit(self, angka):
        digit = 0
        num = angka
        while num != 0:
            num //= 10
            digit += 1
        return digit
    
    def spasi(self, max, len):
        for i in range (max - len):
            print(' ', end="")
            
    def garis(self, max):
        print('+', end="")
        for i in range (max + 29):
            print('-', end="")
        print('+')
    
    def show(self, ls):
        h1 = "ID"
        h2 = "Nama"
        h3 = "Harga"
        h4 = "Stok"
        h5 = "Jenis"
        h6 = "Bahan"
        h7 = "Warna"
        h8 = "Untuk"
        h9 = "Size"
        h10 = "Merk"
        
        max1 = len(h1)
        max2 = len(h2)
        max3 = len(h3)
        max4 = len(h4)
        max5 = len(h5)
        max6 = len(h6)
        max7 = len(h7)
        max8 = len(h8)
        max9 = len(h9)
        max10 = len(h10)
        
        for baju in ls:
            if (len(baju.getId()) > max1): max1 = len(baju.getId())
            if (len(baju.getNamaProduk()) > max2): max2 = len(baju.getNamaProduk())
            if (self.getDigit(baju.getHargaProduk()) > max3): max3 = self.getDigit(baju.getHargaProduk())
            if (self.getDigit(baju.getStokProduk()) > max4): max4 = self.getDigit(baju.getStokProduk())
            if (len(baju.getJenis()) > max5): max5 = len(baju.getJenis())
            if (len(baju.getBahan()) > max6): max6 = len(baju.getBahan())
            if (len(baju.getWarna()) > max7): max7 = len(baju.getWarna())
            if (len(baju.getUntuk()) > max8): max8 = len(baju.getUntuk())
            if (len(baju.getSize()) > max9): max9 = len(baju.getSize())
            if (len(baju.getMerk()) > max10): max10 = len(baju.getMerk())
        
        self.garis(max1 + max2 + max3 + max4 + max5 + max6 + max7 + max8 + max9 + max10)
        print("|", h1, end=" ")
        self.spasi(max1, len(h1))
        print("|", h2, end=" ")
        self.spasi(max2, len(h2))
        print("|", h3, end=" ")
        self.spasi(max3, len(h3))
        print("|", h4, end=" ")
        self.spasi(max4, len(h4))
        print("|", h5, end=" ")
        self.spasi(max5, len(h5))
        print("|", h6, end=" ")
        self.spasi(max6, len(h6))
        print("|", h7, end=" ")
        self.spasi(max7, len(h7))
        print("|", h8, end=" ")
        self.spasi(max8, len(h8))
        print("|", h9, end=" ")
        self.spasi(max9, len(h9))
        print("|", h10, end=" ")
        self.spasi(max10, len(h10))
        print("|")
        
        self.garis(max1 + max2 + max3 + max4 + max5 + max6 + max7 + max8 + max9 + max10)
        for baju in ls:
            print("|", baju.getId(), end=" ")
            self.spasi(max1, len(baju.getId()))
            print("|", baju.getNamaProduk(), end=" ")
            self.spasi(max2, len(baju.getNamaProduk()))
            print("|", baju.getHargaProduk(), end=" ")
            self.spasi(max3, self.getDigit(baju.getHargaProduk()))
            print("|", baju.getStokProduk(), end=" ")
            self.spasi(max4, self.getDigit(baju.getStokProduk()))
            print("|", baju.getJenis(), end=" ")
            self.spasi(max5, len(baju.getJenis()))
            print("|", baju.getBahan(), end=" ")
            self.spasi(max6, len(baju.getBahan()))
            print("|", baju.getWarna(), end=" ")
            self.spasi(max7, len(baju.getWarna()))
            print("|", baju.getUntuk(), end=" ")
            self.spasi(max8, len(baju.getUntuk()))
            print("|", baju.getSize(), end=" ")
            self.spasi(max9, len(baju.getSize()))
            print("|", baju.getMerk(), end=" ")
            self.spasi(max10, len(baju.getMerk()))
            print("|")
        self.garis(max1 + max2 + max3 + max4 + max5 + max6 + max7 + max8 + max9 + max10)   