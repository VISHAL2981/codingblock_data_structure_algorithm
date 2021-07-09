#include<iostream>
using namespace std;

int main(){
     long long int no;
    cin>>no;
    int digit;
    cin>>digit;
    int count=0;
    while (no>0)
    {
        if (no%10==digit)
        {
            count++;
        }
        no=no/10;

        
    }
    cout<<count;
    return 0;
}