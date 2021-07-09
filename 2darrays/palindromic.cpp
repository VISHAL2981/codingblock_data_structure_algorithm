#include <iostream>
#include <cstring>
using namespace std;

//read a sentence/paragraph and check if its palindrome or note

bool ispalindrome(char a[])
{

    int i = 0;
    int j = strlen(a) - 1;

    while (i < j)
    {
        if (a[i] == a[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }

    return true;
}

int main()
{

    char a[1000];
    cin.getline(a, 1000);

    if (ispalindrome(a))
    {
        cout << "palindrome string";
    }
    else
    {
        cout << " not a palindrome string";
    }

    return 0;
}