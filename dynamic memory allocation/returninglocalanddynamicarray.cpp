#include<iostream>
using namespace std;

int *fun(){


  //  int a[]={1,2,3,4,5};  //static 

  int *a=new int[5];  //dynamic
  a[0]=11;
  a[1]=9;
  cout<<a<<endl;
  cout<<a[0]<<endl;

  //we should never return a local variable 

  return a;

}

int main(){
int*b=fun(); // if we use static code memory destroyed their but we use dynamic so its means we use heap memory 
cout<<b<<endl;
cout<<b[0]<<endl; //---> if we use staic memory destroyed so we get here garbabe value or 1 or segment fault


    return 0;
}