#include <iostream>
using namespace std;

int main()
{

    char ch;
    cin >> ch;

    switch (ch)
    {

    case 'P':
    case 'p':
        cout << "pizza" << endl;
        break;
    case 'M':
    case 'm':
        cout << "maggi" << endl;
        break;
    case 'D':
    case 'd':
        cout << "dosa" << endl;
        break;
    case 'C':
    case 'c':
        cout << "chilly potatao" << endl;
        break;
    default:
        cout << "item not available" << endl;
    }
    return 0;
}