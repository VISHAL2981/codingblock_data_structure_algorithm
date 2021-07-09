#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int no;
    for (int i = 0; i < n; i++)
    {
        cin>>no;
        int odd=0;
        int even=0;
        while (no>0)
        {
            int ld = no%10;
            
            ld%2==0?even+=ld:odd+=ld;
            no=no/10;
        }
        if (even%4==0 || odd%3==0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }

    }
    return 0;
}