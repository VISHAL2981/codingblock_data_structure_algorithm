#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int arr[] = {10, 20, 33, 40, 50};
    int n = sizeof(arr) / sizeof(int);

    //search --->

    int key;
    cin >> key;

    auto it = find(arr, arr + n, key);
    //cout<<it<<endl;

    int index = it - arr;

    if (index == n)
    {
        cout << key << " not present ";
    }
    else
    {
        cout << " present at index " << index;
    }

    return 0;
}