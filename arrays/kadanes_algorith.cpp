#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int a[1000];

    int cs = 0;
    int ms = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    //kadanes algorith for maximum sub array sum

    for (int i = 0; i < n; i++)
    {

        cs = cs + a[i];

        if (cs < 0)
        {
            cs = 0;
        }

        ms = max(ms, cs);
    }
    cout << "maximumsum is" << ms << endl;

    return 0;
}