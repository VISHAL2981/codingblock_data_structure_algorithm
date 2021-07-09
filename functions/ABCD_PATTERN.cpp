#include<iostream>
using namespace std;

/* print the following pattern n=5

ABCDE
ABCD
ABC
AB
A
*/

void printABCDpattern(int n){
    for(int i=1; i<=n; i++){
        int cntalpabet = n-i+1;
        char alphabet = 'A';
        for(int j=1; j<=cntalpabet; j++){
            cout<<alphabet;
            alphabet=alphabet+1;
        }
        
        cout<<endl;
    }
}

int main(){

    int n;
    cin>>n;

    printABCDpattern(n);

    return 0;
}