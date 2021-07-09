#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int space, oddspace;
    space = n - 1;
    oddspace = 1;
    for (int i = 1; i <= (n / 2) + 1; i++)
    {
        for (int j = 0; j < space; j++)
        {
            cout << "  ";
        }
        space -= 2;
        for (int k = i; k >= 1; k--)
        {
            cout << k << " ";
        }
        if (i >= 2)
        {
            for (int i = 0; i < oddspace; i++)
            {
                cout << "  ";
            
            }

            oddspace += 2;
            for (int o = 1; o <= i; o++)
            {
                cout << o << " ";
            }
        }

        cout << endl;
    }
    //cout<<oddspace<<" "<<space;
    space += 4;
    oddspace -= 4;
    int row = n / 2;
    for (int i = 1; i <= n / 2; i++)
    {
        for (int j = 0; j < space; j++)
        {
            cout << "  ";
        }
        space += 2;
        for (int k = row; k >= 1; k--)
        {
            cout << k << " ";
        }

        for (int o = 0; o < oddspace; o++)
        {
            cout << "  ";
        }
        oddspace -= 2;
        if (i != n / 2)
        {
            for (int p = 1; p <= row; p++)
            {
                cout << p << " ";
            }
        }
        row--;
        cout << endl;
    }

    return 0;
}