#include<iostream>
using namespace std;



int factorial(int n){
    int ans =1;
    for(int i=1; i <= n; i++){
        ans=ans*n;
    }
    return ans;
}
int NCR(int n,int r){
    int ans=factorial(n)/(factorial(n-r)*factorial(r));

    return ans;
}

int main(){

    //NCR AND FACTORAIL OF NUMBER OF


    cout<<factorial(5)<<endl;
    cout<<NCR(5,2)<<endl;





    return 0;
}