#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n;
    cin >> n;

    char a[1000];
    char largest[1000];

    int len = 0;
    int largestlen = 0;
    cin.get();

    for (int i = 0; i < n; i++)
    {
        cin.getline(a, 1000);

        len = strlen(a);

        if (len > largestlen)
        {
            largestlen = len;
            strcpy(largest, a);
        }
    }

    cout << largest << "and" << largestlen << endl;

    return 0;
}
