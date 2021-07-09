#include<iostream>
using namespace std;

int main(){

int no;
while(true){

    cin>>no;

    if (no%7==0){

        continue;

    }

    if (no%13==0){

        break;
    }

    cout<<"NO"<<no<<endl;
}

cout<<"came out of the loop" <<endl;
return 0;
}
