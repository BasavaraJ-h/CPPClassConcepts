#include <iostream>

using namespace  std;

class staticMem{
    //Static data member
    static int count;
    int memval;
public:
    void getdata(){
        memval = count;
        count++;
    }
    //static member function
    static void  putdata();
    void putmemval();

};

//defining static data member
int  staticMem::count;


void staticMem ::putmemval(){
    cout<<  "memberval = "<<memval << endl;
}
//defining static member function
void staticMem:: putdata(){
    //static function can access only static data member and static member function
    cout<< " count " << count<<endl;
}


int main(){
    staticMem A , B, C;
    A.getdata();
    B.getdata();
    C.getdata();
    A.putmemval();
    B.putmemval();
    C.putmemval();


    //calling static member function
    staticMem::putdata();


    return  0;
}
