#include<iostream>
using namespace std;

void sayhello(){
    cout<<"hello everyone!";
}

 int factorial(int n){
     int ans = 1;

     for (int i = 2; i<=n; i++){
         ans=ans*i;
         
     }
     return ans;
     }

     int main(){
         cout<<"beforefuntion!"<<endl;
         sayhello();
         cout<<endl<<"afterfuntion!"<<endl;
     }

     //2 part
     int n = 2;
     cout<<"enter a number!";
       cin>>n;
       factorial(n);

     cout<<factorial(n)<<endl;

    









     
     


    return 0;
}