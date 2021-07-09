#include<iostream>
 #include <climits>//modifiers add int max int min
using namespace std;

int main(){
    //datatype modifiers+datatype
    //long short signed and unsigned


int x;
cout<<sizeof(x)<<endl;
cout<<INT_MAX<<endl;
cout<<INT_MIN<<endl;

x=INT_MAX;

// what will happen when we add 1 to x ?
cout<<"X"<<x<<endl;
x=x+1;
cout<<"updatedX"<<x<<endl;

// This goes to wrap around condition





return 0;
}