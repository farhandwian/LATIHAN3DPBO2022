public class Main {
    public static void main(String[] args) {
        // buat objek oProcie, oDisk, dan oRam
        Processor objProcie = new Processor("Intel i5", 32000420);
        Disk objDisk = new Disk("SSD", "123 TB", 12345);
        Ram objRam = new Ram("123123 GB", 12345);

        int total = objProcie.getPrice() + objDisk.getPrice() + objRam.getPrice(); // sum
        Pc objcomputer = new Pc(objProcie, objDisk, objRam, total); 
        objcomputer.printComputer(); // print hasilnya
    }
}
