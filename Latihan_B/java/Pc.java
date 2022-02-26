public class Pc
{
    private Processor objProc;
    private Disk objStorage;
    private Ram objMemory;
    private int totalPrice;

    // constructor
    public Pc(){}
    public Pc(Processor objProc, Disk objStorage, Ram objMemory, int totalPrice) {
        this.objProc = objProc;
        this.objStorage = objStorage;
        this.objMemory = objMemory;
        this.totalPrice = totalPrice;
    }

    // method set dan get untuk objProc, objStorage, objMemory, dan totalPrice
    public void setProcie(Processor objProc) {
        this.objProc = objProc;
    }
    public void setStorage(Disk objStorage) {
        this.objStorage = objStorage;
    }
    public void setMemory(Ram objMemory) {
        this.objMemory = objMemory;
    }
    public void setTotalPrice(int totalPrice) {
        this.totalPrice = totalPrice;
    }

    public Processor getProcie() {
        return objProc;
    }
    public Disk getStorage() {
        return objStorage;
    }
    public Ram getMemory() {
        return objMemory;
    }
    public int getTotalPrice() {
        return totalPrice;
    }

    // method print
    public void printComputer() {
        System.out.println("BAHASA JAVA\n");
        objProc.printProcie();
        objStorage.printDisk();
        objMemory.printRam();
        System.out.println("Total Price : " + "Rp. " + totalPrice);
    }
}
