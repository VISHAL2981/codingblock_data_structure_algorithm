#include <iostream>
using namespace std;
//binary search for
//efficient way to search in sorted arrays

int first_occurence(int a[], int n, int key)
{

    int s = 0;
    int e = n - 1;
    int ans=-1;

    // update in the direction that ans value gets lower and lower

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[mid] > key)
        {   
            ans=mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    return ans;
}
int last_occurence(int a[], int n, int key)
{

    int s = 0;
    int e = n - 1;
    int ans=-1;

    // update in the direction that ans value gets lower and lower

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (a[mid] == key)
        {     ans=mid;
        s=mid+1; //explore right part of array
           
        }
        else if (a[mid] > key)
        {   
           
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    return ans;
}

int main()
{
    int arr[]={1,2,5,8,8,8,8,10,12,15,20};
    int n= sizeof(arr)/sizeof(int);

    int key;
    cin>>key;
    //ask for the element we want to search for

    cout << "enter the elemnt you want to search for:";
   
    cout << first_occurence(arr, n, key) << endl;
    cout << last_occurence(arr, n, key) << endl;

    return 0;
}