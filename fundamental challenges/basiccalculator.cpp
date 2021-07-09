#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    while ((ch!='x') and (ch!='X'))
    {   
        int a,b;
        switch (ch)
        {
        case '+':
            
            cin>>a>>b;
            cout<<a+b<<endl;
            break;
        case '-':
            int a,b;
            cin>>a>>b;
            cout<<a-b<<endl;
            break;
        case '*':
            cin>>a>>b;
            cout<<a*b<<endl;
            break;
        case '/':
            cin>>a>>b;
            cout<<a/b<<endl;
            break;
        case '%':
           cin>>a>>b;
           cout<<a%b<<endl;
           break;               
        default:
             cout<<"Invalid operation. Try again."<<endl;
             break;
        }
        
      
    
    }
    
    return 0;
}