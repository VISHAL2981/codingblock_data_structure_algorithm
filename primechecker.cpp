#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int i;

    for (i = 2; i <= n - 1; i++)

    {
        if (n % i == 0)
        {
            /* code */
            cout << n << "is not prime......!" << endl;
            break;
        }
    }

    if (i == n)
    {

        cout << n << "is prime..........!" << endl;
    }

    return 0;
}
