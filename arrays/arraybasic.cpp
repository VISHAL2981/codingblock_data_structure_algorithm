#include<iostream>
using namespace std;

int main(){


    //In it of an array 

    int a[10] = {0};

    //size of 

    cout<<sizeof(a);
    int n = sizeof(a)/sizeof (int);
    cout<<n<<endl;


    //Input all the elements from the user

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //update a single index 

    a[8] =100;

    //print all the first 10 elemwts

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ,";
    }









    return 0;
}