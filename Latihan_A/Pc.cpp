class Pc
{
    private:
        // private atribut
        Processor objProc;
        Disk objStorage;
        Ram objMemory;
        int totalPrice;

    public:
        // constructor
        Pc(){}
        Pc(Processor objProc, Disk objStorage, Ram objMemory, int totalPrice) {
            this->objProc = objProc;
            this->objStorage = objStorage;
            this->objMemory = objMemory;
            this->totalPrice = totalPrice;
        }

        // method get dan set untuk objProc, objStorage, objMemory, dan totalPrice
        
        void setProcie(Processor objProc) {
            this->objProc = objProc;
        }
        void setStorage(Disk objStorage) {
            this->objStorage = objStorage;
        }
        void setMemory(Ram objMemory) {
            this->objMemory = objMemory;
        }
        void setTotalPrice(int totalPrice) {
            this->totalPrice = totalPrice;
        }
        
        Processor getProcie() {
            return this->objProc;
        }
        Disk getStorage() {
            return this->objStorage;
        }
        Ram getMemory() {
            return this->objMemory;
        }
        int getTotalPrice() {
            return this->totalPrice;
        }

        // Print method
        void printComputer(){
            cout << "BAHASA C++\n";
            this->objProc.printProcie();
            this->objStorage.printDisk();
            this->objMemory.printRam();
            cout << "Total Price : " << "Rp. " << this->totalPrice << endl;
        }

        // destructor
        ~Pc(){}
};