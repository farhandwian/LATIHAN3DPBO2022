from Processor import Processor
from Disk import Disk
from Ram import Ram
from Pc import Pc

# buat objek oProcie, oDisk, dan oRam
objProcie = Processor("Intel i9 5900K", 12300420)
objDisk = Disk("SSD", "120 TB", 6914446)
objRam = Ram("12 GB", 1100069)

total = objProcie.getPrice() + objDisk.getPrice() + objRam.getPrice() # sum
computer = Pc(objProcie, objDisk, objRam, total) 
computer.printComputer() 