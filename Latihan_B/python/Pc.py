from Processor import Processor
from Disk import Disk
from Ram import Ram

class Pc:
    # atribut private
    __objProcie = Processor()
    __objStorage = Disk()
    __objMemory = Ram()
    __totalPrice = 0

    # constructor
    def __init__(self, procie, storage, memory, totalPrice=0):
        self.__objProcie = procie
        self.__objStorage = storage
        self.__objMemory = memory
        self.__totalPrice = totalPrice

    # method set dan get untuk procie, storage, memory, dan totalPrice
    def setProcie(self, procie):
        self.__objProcie = procie
    def setStorage(self, storage):
        self.__objStorage = storage
    def setMemory(self, memory):
        self.__objMemory = memory
    def setPrice(self, totalPrice):
        self.__totalPrice = totalPrice

    def getProcie(self):
        return self.__objProcie
    def getStorage(self):
        return self.__objStorage
    def getMemory(self):
        return self.__objMemory
    def getTotalPrice(self):
        return self.__totalPrice
    
    # method print
    def printComputer(self):
        self.__objProcie.printProcie()
        self.__objStorage.printDisk()
        self.__objMemory.printRam()
        print("Total Price : " + "Rp. " + str(self.getTotalPrice()))