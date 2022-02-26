class Ram
{
    private:
        // atribut
        string capacity;
        int price;

    public:
        // constructor
        Ram(){}
        Ram(string capacity, int price) {
            this->capacity = capacity;
            this->price = price;
        }

        // method set dan get untuk capacity dan price
        void setCapacity(string capacity) {
            this->capacity = capacity;
        }
        void setPrice(int price) {
            this->price = price;
        }
        
        string getCapacity() {
            return this->capacity;
        }
        int getPrice() {
            return this->price;
        }

        // method output untuk Ram
        void printRam() {
            cout << "   Ram" << endl;
            cout << "Capacity    : " << this->capacity << endl;
            cout << "Price       : " << "Rp. " << this->price << endl;
            cout << "****************************" << endl;
        }

        // destructor
        ~Ram(){}
};