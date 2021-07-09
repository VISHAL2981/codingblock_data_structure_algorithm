#include<iostream>
using namespace std;

int f(int n){
    //base caSE


    if(n==0 or n==1){
        return n;
    }
    //rec case

    int f1=(n-1);
    int f2=(n-2);
    return f1+f2;
}

int main(){

    int n;
    cin>>n;
    cout<<f(n)<<endl;

    return 0;
}