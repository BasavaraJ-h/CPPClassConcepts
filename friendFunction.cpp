#include <iostream>
using namespace  std;
class one;  //forward declaration

class two {
int memval;
public:
void getval(int val ){
    memval = val;
}
    //friend function
    friend void maxval(one oneObj, two twoObj );
};

class one{
    int memval ;
public:
    void getval(int i){
        memval = i;
    }
    //friend function
    friend void maxval( one oneObj, two twoObj);
};

//friend function definition
void maxval(one oneObj , two twoObj){
    if(oneObj.memval >= twoObj.memval){
        cout << "one = "<< oneObj.memval<<endl;
    }else{
        cout << "two = "<< twoObj.memval<<endl;
    }
}

int main(){
    one oneObj;
    two twoObj;
    oneObj.getval(10);
    twoObj.getval(20);
    //calling the friend function
    maxval(oneObj, twoObj);
    return 0;
}
