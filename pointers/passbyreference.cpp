#include<iostream>
using namespace std;

void increment(int *aptr){
    *aptr=*aptr+1;
    cout<<"inside function"<<*aptr<<endl;
}

int main(){

    int a=10;
    increment(&a); //*aptr=&a;
    cout<<"inside main"<<a<<endl;


    return 0;
}
