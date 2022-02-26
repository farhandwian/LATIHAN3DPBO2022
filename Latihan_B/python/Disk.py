class Disk:
    # atribut private
    __type = ""
    __capacity = ""
    __price = 0

    # constructor
    def __init__(self, type="", capacity="", price=0):
        self.__type = type
        self.__capacity = capacity
        self.__price = price

    # method set dan get untuk type, capacity, dan price
    def setType(self, type):
        self.__type = type
    def setCapacity(self, capacity):
        self.__capacity = capacity
    def setPrice(self, price):
        self.__price = price

    def getType(self):
        return self.__type
    def getCapacity(self):
        return self.__capacity
    def getPrice(self):
        return self.__price
    
    # method print
    def printDisk(self):
        print(" Disk")
        print("Type        : " + self.getType())
        print("Capacity    : " + self.getCapacity())
        print("Price       : " + "Rp. " + str(self.getPrice()))
        print("*********************************")
        