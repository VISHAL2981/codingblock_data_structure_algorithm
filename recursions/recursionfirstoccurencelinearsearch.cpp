#include <iostream>
using namespace std;

int firstocc(int *a, int n, int key)
{
    if (n == 0)
    {
        return -1;
    }
    //rec case

    if (a[0] == key)
    {
        return 0;
    }
    int i = firstocc(a + 1, n - 1, key);
    if (i == -1)
    {
        return -1;
    }
    return i + 1;
}
//diffrent style same function
int linearsearch(int *a, int n, int i, int key)
{
    //base case
    if (i == n)
    {
        return -1;
    }
    if (a[i] == key)
    {
        return i;
    }
    return linearsearch(a, i + 1, n, key);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 7, 5, 6, 7, 10};

    int key = 7;

    int n = sizeof(arr) / sizeof(int);

    cout << firstocc(arr, n, key);

    return 0;
}
