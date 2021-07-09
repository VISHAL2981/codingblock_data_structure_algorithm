#include<iostream>
using namespace std;

int main(){

    //what is a pointer?---> data type which holds the data of another data type 

    int x=10;
    int y=20;
    int a=3;
   
   
    int*b=&a;

    //& address of operators

    cout<<"the address ofa is "<<&a<<endl;
    cout<<"the address of a is "<<b<<endl;

    // it does not work for chracter variables
    char ch='A';
    //cout<<&ch<<endl; ----> //this step is not working we use down method
    cout<<(void*)&ch<<endl;

    //*---> value at dereference operator 

    cout<<"the value at address b is "<<*b<<endl; 

    //pointer to


    int*xptr=&x;//store address of variable 

    //xptr=&x;

    cout<<&x<<endl;
    cout<<xptr<<endl;


    //reassign another address to the variable 

    xptr=&y;

    cout<<&y<<endl;
    cout<<xptr<<endl;  // ----> basciaaly we reassign another to pointer variable



    return 0;
}