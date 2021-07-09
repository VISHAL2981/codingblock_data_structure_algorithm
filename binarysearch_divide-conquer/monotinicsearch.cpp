#include <iostream>
using namespace std;

float square_root(int n, int p)
{
    int s = 0;
    int e = n;
    float ans = -1;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (mid * mid == n)
        {
            return mid;
        }
        if (mid * mid < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    //floating part
    // brute force

    float inc = 0.1;
    for (int times = 1; times <= p; times++)
    {
        while (ans * ans <= n)
        {
            ans = ans + inc;
        }
        //    overshot the value at

        ans = ans - inc;
        inc = inc / 10;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    cout << square_root(n, 5) << endl;

    return 0;
}
