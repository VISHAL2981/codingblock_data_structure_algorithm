#include <iostream>
using namespace std;

void readline(char a[], int maxlen, char delim = '\n')
{
    int i = 0;
    char ch = cin.get();

    while (ch != delim)
    {
        a[i] = ch;
        i++;
        if (i == (maxlen - 1))
        {
            break;
        }
        ch = cin.get();
    }

    //once ypu out of the loop,

    a[i] = '\0';
    return;
}

int main()
{

    char a[1000];

    readline(a, 1000, '$');

    cout << a << endl;

    return 0;
}
