#include<iostream>

using namespace  std;

// making fucntion inline inside the class
class inlineExample{
    int itemNumber;
    int value;
public:
    void getdata(int num, int val);

    //inline function
    void putdata()
    {
        cout<< "inline function within the class" << endl;
        cout << "item number = "<< itemNumber << "  value = "<< value<< endl;
    }
};

//function definition
void inlineExample ::getdata(int num, int val){
    itemNumber = num;
    value = val;
}

/* below example makes outside function as inline
*/

class outinline {
    int itemNumber;
    int price;
public:
    void putdata();
    void getdata(int num , int val);
};

void outinline:: putdata(){

    cout << " item number =   " << itemNumber << " price = " << price <<endl;
}

// making function inline
inline void outinline:: getdata(int num, int val){

    cout<< "inline function outside the class"<<endl;
    itemNumber = num;
    price = val;
}



//main function
int main()
{
    // inline function within class
    inlineExample inlineObject;
    inlineObject.getdata(2,200);
    inlineObject.putdata();

    //inline function outside the class
    outinline outInlineObj;
    outInlineObj.getdata(3,250);
    outInlineObj.putdata();

    return 0;
}
