public class Disk 
{
    private String type;
    private String capacity;
    private int price;

    // constructor
    public Disk(){}
    public Disk(String type, String capacity, int price) {
        this.type = type;
        this.capacity = capacity;
        this.price = price;
    }

    // method set dan get untuk type, capacity, dan price
    public void setType(String type) {
        this.type = type;
    }
    public void setCapacity(String capacity) {
        this.capacity = capacity;
    }
    public void setPrice(int price) {
        this.price = price;
    }

    public String getType() {
        return type;
    }
    public String getCapacity() {
        return capacity;
    }
    public int getPrice() {
        return price;
    }

    // method print
    public void printDisk() {
        System.out.println("    Disk");
        System.out.println("Type        : " + type);
        System.out.println("Capacity    : " + capacity);
        System.out.println("Price       : " + "Rp. " + price);
        System.out.println("*************************************");
    }
}
