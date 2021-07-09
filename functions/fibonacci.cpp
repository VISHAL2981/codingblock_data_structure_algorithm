#include<iostream>
using namespace std;
int main(){

    int n;
    cin >> n;
    int i = 0;
    int j = 1;
    int temp =i+j;
    for(int k=1;k<=n;k++){
        for(int l = 1; l<=k;l++){

            cout<<i<<" ";
            i=j;
            j=temp;
            temp=i+j;
        }
        cout<<endl;
    }




    return 0;
}