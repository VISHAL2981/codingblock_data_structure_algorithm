#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int sum = 0;

    while(n>0){

        int lastdigit =n%10;

        sum=sum+lastdigit;

        n=n/10;
    }

    cout<<"sum of digits: "<<sum<<endl;


    return 0 ;
}