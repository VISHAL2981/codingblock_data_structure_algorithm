
//running comparotor function with bubble sorting
#include <iostream>
using namespace std;

bool compare(int a, int b)
{

    cout << "comparing" << a << "and" << b << endl;

    return a > b;
}

//bubble sort

void bubble_sort(int a[], int n, bool (&cmp)(int a, int b))
{

    //N-1 large elemnts to the endl

    for (int itr = 0; itr < n; itr++)
    {

        //pairwise swapping in the unsorted of the array

        for (int j = 0; j <= (n - itr - 1); j++)
        {

            if (cmp(a[j], a[j + 1]))
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}
int main()
{

    int n, key;
    cin >> n;

    int a[1000];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bubble_sort(a, n, compare);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ",";
    }

    return 0;
}
