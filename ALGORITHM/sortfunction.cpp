#include <iostream>
#include <algorithm>
using namespace std;

//define a comaprator function // for decreasing sorting

bool compare(int a, int b)
{
    cout << "comparing" << a << "and" << b << endl;
    return a > b;
}

int main()
{
    int n, key;
    cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // sort an array using sort() function,more efficient

    sort(a, a + n, compare);

    for (size_t i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}