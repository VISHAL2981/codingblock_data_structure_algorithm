#include <iostream>
#include <algorithm>
using namespace std;

void display(int a[][1000], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void rotate_stl(int a[][1000], int n)
{
    //samething using stl reverse (start and end) containers method

    for (int i = 0; i < n; i++)
    {
        reverse(a[i], a[i] + n);
    }
    //to take transpose

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j)
            {
                swap(a[i][j], a[j][i]);
            }
        }
    }
}
int main()
{
    int a[1000][1000];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    rotate_stl(a, n);
    display(a, n);

    return 0;
}