#include<iostream>

using namespace std;

int main(){
    int b[]={1,2,3};

    cout<<b<<endl;

    char a[]={'a','b','c','d','e','\0'};
    cout<<a<<endl;

    //input 

    char s1[]={'h','e','l','l','o'};//doesnt terminate with null character
    char s2[]="hello";//another way


    cout<<s1<<" "<<sizeof(s1)<<endl;//5bytes
    cout<<s2<<" "<<sizeof(s2)<<endl;//6byte

    char s3[10]="vishal";
    char s4[10];
    cin>>s4;

    cout<<s3<<s4<<endl;




    return 0;
}