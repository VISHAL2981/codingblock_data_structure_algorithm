#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int min = INT_MAX;
    int max = INT_MIN;

    int no;

    for (int i = 0; i < n; i++)
    {
        cin >> no;

        if (no > max)
        {
            max = no;
        }
        if (no < min)
        {
            min = no;
        }
    }

    cout << max << " max number" << endl;
    cout << min << " min number" << endl;

    return 0;
}