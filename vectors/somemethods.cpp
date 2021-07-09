#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //youcan create and intialize of vector
    vector<int> d{1, 2, 3, 4, 10, 19};

    //push back 0(1)for most of time
    d.push_back(16);

    //pop back remove the last elemnt 0(1) for
    d.pop_back();

    //inset same element in middle 0(n)

    d.insert(d.begin() + 3, 4, 100);

    //erase some elemnt in  middle

    d.erase(d.begin() + 2);
    d.erase(d.begin() + 2, d.begin() + 5);

    //size

    cout << d.size() << endl;
    cout << d.capacity() << endl;

    //we avoid the shrink
    d.resize(18); //if the size is increasing then more memory will be allocated

    cout << d.capacity() << endl;
    //remove all elemnt of the vector doesnt delete the memory occupied by the array

    d.clear();

    //empty

    if (d.empty())
    {
        cout << "this is an empty vector";
    }
    cout << d.size() << endl;
    for (int x : d)
    {
        cout << x << ",";
    }

    cout << endl;

    d.push_back(10);
    d.push_back(11);
    d.push_back(12);

    cout << d.front() << endl;
    cout << d.back() << endl;

    //reserve

    int n;
    cin >> n;

    vector<int> v;

    //to avoid doubling we use reserve function

    v.reserve(1000);

    for (int i = 0; i < n; i++)
    {
        v.push_back(n);
        cout << "changing capacit" << v.capacity() << endl;
    }
    cout << "capacity" << v.capacity() << endl;

    for (int x : v)
    {
        cout << x << ",";

        return 0;
    }
}