#include<iostream>
using namespace std;

int countbits(int n){
    int ans=0;
    while(n>0){
        ans+=(n&1);
        n=n>>1;
    }
    return ans;
    }

    //second method 


    int countbitsfaster(int n){
        int ans=0;
        while(n>0){
            n=n&(n-1);
            ans++;

        }
        return ans;
    }
    int main(){




        int n; 
        cin>>n;
        cout<<countbits(n)<<endl;
        cout<<countbitsfaster(n)<<endl;
        cout<<_builtin_popcount(n)<<endl;

        return 0;
    }