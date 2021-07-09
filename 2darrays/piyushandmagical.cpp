#include <iostream>
using namespace std;

void magicalpark(char a[][100], int m, int n, int k, int s)
{

    //piyusg can get out the park
    bool success = true;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char ch = a[i][j];

            if (s < k)
            {
                success = false;
                break;
            }
            if (ch == '*')
            {
                s += 5;
            }
            else if (ch == '.')
            {
                s -= 2;
            }
            else
            {
                break;
            }

            //we also loose 1 point when we move right except for the last column

            if (j != n - 1)
            {
                s--;
            }
        }
    }

    if (success)
    {
        cout << "yes" << endl;
        cout << s << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}

   int main(){
    int n,m,k,s;
    cin>>n>>m>>k>>s;
    char a[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
        
    }
   magicalpark(a,n,m,k,s);
   
    
    
    return 0;
}