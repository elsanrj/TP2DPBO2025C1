class Petshop:
    __id = ""
    __namaProduk = ""
    __hargaProduk = 0
    __stokProduk = 0
    
    def __init__(self, id = "", namaProduk = "", hargaProduk = 0, stokProduk = 0):
        self.__id = id
        self.__namaProduk = namaProduk
        self.__hargaProduk = hargaProduk
        self.__stokProduk = stokProduk
        
    def getId(self):
        return self.__id

    def setId(self, id):
        self.__id = id 

    def getNamaProduk(self):
        return self.__namaProduk

    def setNamaProduk(self, namaProduk):
        self.__namaProduk = namaProduk
        
    def getHargaProduk(self):
        return self.__hargaProduk

    def setHargaProduk(self, hargaProduk):
        self.__hargaProduk = hargaProduk

    def getStokProduk(self):
        return self.__stokProduk

    def setStokProduk(self, stokProduk):
        self.__stokProduk = stokProduk