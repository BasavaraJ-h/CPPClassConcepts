#include <iostream>

using namespace std;

// class implementaion
class itemclass{

    int itemNumber ; //private by defualt
    int price ; // private by defualt
public:
    //member function declaration in public
    void putdata();
    void getdata(int Number, int itemPrice);
};

//member function definition
void itemclass:: putdata()
{
    //private memebers are accessable to member function only
    cout << "Item number = "<< itemNumber << "  item price = "<<price<<endl;
}

void itemclass::getdata(int Number, int itemPrice)
{
    itemNumber = Number;
    price = itemPrice;
}

//main function
int main()
{
    itemclass newitem; // create object of class newitem

    newitem.getdata(1,100);
    newitem.putdata();

    return 0;
}
