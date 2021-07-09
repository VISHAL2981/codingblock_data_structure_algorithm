#include <iostream>
using namespace std;

int main()
{

    char ch;
    ch = cin.get();

    int x = 0;
    int y = 0;

    while (ch != '\n')
    {

        if (ch == 'N' or ch == 'n')
        {
            y++;
        }

        else if (ch == 'E' or ch == 'e')
        {

            x++;
        }
        else if (ch == 'S' or ch == 's')
        {

            y--;
        }
        else
        {

            x--;
        }

        ch = cin.get();
    }

    if (x > 0)
    {

        for (int i = 0; i < x; i++)
        {
            cout << "E";
        }
    }
    else
    {

        for (int i = 0; i < abs(x); i++)
        {
            cout << "W";
        }
    }

    if (y > 0)
    {

        for (int i = 0; i < y; i++)
        {
            cout << "N";
        }
    }
    else
    {

        for (int i = 0; i < abs(y); i++)
        {
            cout << "S";
        }
    }
    cout << endl;
    cout << " the final displacements of X is  " << x << "   and Y is   " << y << endl;

    return 0;
}