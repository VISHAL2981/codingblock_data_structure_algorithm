#include<iostream>
#include<cstring>
using namespace std;
int main()
{
   //ccooooding -> coding 
    char s[1000];
    cin.getline(s,1000);
    int len=strlen(s);
    int i=0;
    int j=1;
    while (j<len)
    {
        if (s[i]==s[j])
        {
            j++;
        }
        else
        {
            s[++i]=s[j];
            j++;
        }
        
    }
    cout<<i<<endl;
   s[i+1]='\0';
    cout<<s;
    return 0;
}