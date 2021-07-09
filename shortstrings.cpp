#include<iostream>
using namespace std;

int main(){
    char ch;
    int x=0;
    int y=0;
    ch = cin.get();
    while (ch!='\n')
    {
        if (ch=='n'||ch=='N')
        {
            y=y+1;
        }
        else
        {
            if (ch=='s'||ch=='S')
            {
               y=y-1;
            }
            else
            {
                if (ch=='e'||ch=='E')
                {
                    x=x+1;
                }
                else
                {
                    x=x-1;
                }
       }
       
        }
        ch=cin.get();  
    }
    if (x>0)
    {
        for (int i = 0; i < x; i++)
        {
            cout<<"E";
        }
        
    }
    else
    {
            for (int i = 0; i < abs(x); i++)
            {
                cout<<"W";
            }
        
    }
    if (y>0)
    {
        for (int i = 0; i < y; i++)
        {
            cout<<"N";
        }
    }
    else
    {
        for (int i = 0; i < abs(y); i++)
            {
                cout<<"S";
            }
    }
cout<<endl;
cout<<"co-ordinates after movement are "<<x<<","<<y;


    return 0;
}