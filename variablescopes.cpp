#include <iostream>
using namespace std;

int x = 100;//global scope

int main()
{

    int x = 10; //local scope
    cout << x << endl;

    for ( int x = 0; x <= 5; x++)
    {
        cout <<"loopscope"<< x << endl;
      
    }

    cout << "local x" << x << endl;
    cout << "global x" << ::x << endl;
}




