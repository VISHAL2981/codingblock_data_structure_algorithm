#include<iostream>
using namespace std;

bool isprime( int n){
   
    for( int i = 2; i<n; i++){
        if(n%2 == 0){
            return false;
        }
      

    }
    return true;
}
//write a function to print all prime upto n times

void print primes(int N){
    for(int i=2;i<=N;i++){
        if (isprime(i)){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n;
    cin>>n;
    // if (isprime(n)){
    //     cout<<n<<"is prime"<<endl;
    // }
    // else{
    //     cout<<n<<"not prime"<<endl;
    // }

    printprime(n);

    return 0;
}