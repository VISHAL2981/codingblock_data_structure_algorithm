#include <iostream>
using namespace std;

int main()
{

    char ch;
    // cin >> ch;
    ch=cin.get();//this method reads only single char including spaces/new lines

    while (ch != '.')
    {
        //print hte last character that we have read
        cout << ch;

     //update my char in the memory(read the next character)   
        // cin >> ch;
        ch=cin.get();
    }

    return 0;
}