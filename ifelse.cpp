#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    if (n % 2 == 0 & n % 3 == 0)
    {
        cout << n << "is divisible by 2 and 3" << endl;
        cout << "if block" << endl;
    }
    else if (n % 2 == 0)
    {
        cout << n << "is divisible by 2" << endl;
        cout << "else if block" << endl;
    }
    else if (n % 3 == 0)
    {
        cout << n << "is divisible by 3" << endl;
        cout << "else if block" << endl;
    }
    else
    {
        cout << n << "not divisible by 2 or 3" << endl;
        cout << "else block" << endl;
    }

    return 0;
}