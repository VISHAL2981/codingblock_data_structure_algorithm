#include<iostream>
using namespace std;

int main(){
    //allocation + Deallocation = compiler
    int b[100]={0};
    cout<<sizeof(b)<<endl;
    cout<<b<<endl; //symbol table

    //here b can we overwriiten b is a part of read only memory 

    //dynamic allocation(on the fly)

    int n;
    cin>>n;

    int*a= new int[n]{0};
    cout<<sizeof(a)<<endl;

    cout<<a<<endl;//variable a that is created inside the static memory ---> over wriiten

    // a=new char[30];


    //no change

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];

        cout<<a[i]<<" ";
    }
    
    //free up the spaces

    delete [] a;
    



    return 0;
}