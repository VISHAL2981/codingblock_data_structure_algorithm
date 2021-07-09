#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int arr[] = {20, 30, 40, 40, 40, 50, 60, 100, 1100};

    int n = sizeof(arr) / sizeof(int);

    //search in a sorted array

    int key;
    cin >> key;

    bool present = binary_search(arr, arr + n, key);
    if (present)
    {
        cout << "present";
    }
    else
    {
        cout << "absent";
    }

    // two more things
    //get the index of the element
    //lower_bound(s,e,key)and upper_bound(s,e,key)

    auto lb = lower_bound(arr, arr + n, 40);
    cout << endl
         << "lower bound of 40 is" << (lb - arr) << endl;

    //upper bound method

    auto ub = upper_bound(arr, arr + n, 40);
    cout << endl
         << "upper bound of 40 is" << (ub - arr) << endl;
    cout << "occ freq of 40 is" << (ub - lb) << endl;

    return 0;
}