#include <iostream>
using namespace std;

// In this concept we learn that we first use  bubble sorting and now we use inbuilt sort and in this lecture we use {sort kai andar sort kr rhe hai hai array ko}it means we sort a function in another sort function

bool compare(int a, int b)
{
    cout << "comparing" << a << "and" << b << endl;
    return a > b;
}
//buuble sort

void bubble_sort(int a[], int n, bool (&cmp)(int a, int b))
{
    //n-1 large elements at the end

    for (int itr = 1; itr <= n - 1; itr++)
    {
        //pairwise swapping in the unsorted array

        for (int j = 0; j < +(n - itr - 1); j++)
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