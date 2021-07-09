#include <iostream>
using namespace std;

bool issorted(int *a, int n)
{
    //base case:

    if (n == 0 or n == 1)
    {
        return true;
    }
    //rec cases
    if (a[0] < a[1] and issorted(a + 1, n - 1))
    {
        return true;
    }
    return false;
}

int main()
{
    int arr[] = {1, 2, 3, 14, 5};
    int n = sizeof(arr, n) / sizeof(int);
    return 0;
}