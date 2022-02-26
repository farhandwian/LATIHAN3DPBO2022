public class Ram 
{
    private String capacity;
    private int price;

    // constructor
    public Ram(){}
    public Ram(String capacity, int price) {
        this.capacity = capacity;
        this.price = price;
    }

    // method set dan get untuk capacity dan price
    public void setCapacity(String capacity) {
        this.capacity = capacity;
    }
    public void setPrice(int price) {
        this.price = price;
    }

    public String getCapacity() {
        return capacity;
    }
    public int getPrice() {
        return price;
    }

    // method print
    public void printRam() {
        System.out.println("    Ram");
        System.out.println("Capacity    : " + capacity);
        System.out.println("Price       : " + "Rp. " + price);
        System.out.println("*************************************");
    }
}
