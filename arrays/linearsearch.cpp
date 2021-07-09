#include <iostream>
using namespace std;
//linear search
int main()
{

    int n, key;
    cin >> n;

    int a[1000];
   
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    //ask for the element we want to search for

    cout << "enter the elemnt you want to search for:";
    cin >> key;

    //find out the index of elemnt by tranversing the array of elements
    //linear search algorithm
     int i;
    for (i = 0; i <=n - 1; i++)
    {

        if (a[i] == key)
        {
            cout << key << "is present at " << i << "index ";
            break;
        }
    }

        if (i == n)
        {
            cout << key << " is not present " << endl;
        }
    

    return 0;
}