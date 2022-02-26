class Processor
{
    private:
        // atribut
        string name;
        int price;

    public:
        // constructor
        Processor(){}
        Processor(string name, int price) {
            this->name = name;
            this->price = price;
        }

        // method set dan get  untuk name dan price
        void setName(string name) {
            this->name = name;
        }
        void setPrice(int price) {
            this->price = price;
        }

        string getName() {
            return this->name;
        }
        int getPrice() {
            return this->price;
        }

        // method output untuk Processor
        void printProcie() {
            cout << "   Processor" << endl;
            cout << "Name        : " << this->name << endl;
            cout << "Price       : " << "Rp. " << this->price << endl;            
            cout << "****************************" << endl;
        }

        // destructor
        ~Processor(){}
};