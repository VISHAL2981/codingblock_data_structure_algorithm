#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;

    int space;

    space = n - 1;

    for (int i = 1; i < n; i++)
    {
        for (int j = space; j > 0; j--)
        {
            cout << "  ";
        }
        space = space - 1;
        for (int k = i; k < 2 * i; k++)
        {
            cout << k << " ";
        }
        for (int k = (2 * i) - 2; k >= i; k--)
        {
            cout << k << " ";
        }

        cout << endl;
    }

    return 0;
}