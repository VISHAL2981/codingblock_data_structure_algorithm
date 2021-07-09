#include <iostream>
#include <algorithm>
using namespace std;
bool compare(int a, int b)
{
    return a <= b;
}
int main()
{
    //India money change
    int coins[] = {1, 2, 10, 20, 50, 100, 200, 500, 1000, 2000, 4000};
    int n = sizeof(coins) / sizeof(int);
    int money = 198;

    while (money > 0)
    {
        int lb = lower_bound(coins, coins+n, money, compare) - coins - 1;

        int m = coins[lb];
        cout << m << " ";
        money = money - m;
    }

    return 0;
}