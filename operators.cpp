#include <iostream>
using namespace std;

int main()
{

    int a, b, c;

    a = 10;
    b = 20;
    c = 30;

    //logical operator

    if (c > a & c > b)
    {
        cout << "c is largest" << endl;
    }
    // ternary operators
    int x = c % 2 == 0 ? 1 : 0;
    cout <<x<< endl;

    c % 2 == 0 ? cout << "even" : cout << "odd";


    // bitwise operator

     x = 5;
    int y = 7;

    cout << "AND" << (x & y) << endl;
    cout << "OR" << (x | y) << endl;
    cout << "XOR" << (x ^ y) << endl;

    //shift operator

    x=x<<3;
    cout << x<< endl;
    cout<<(y>>1)<<endl;


    //unary operator
    //address of

    cout<<(&x) << endl;

    // post increment/decrement operator

    a=10;
    a*=3;

    cout<<"A after multiply"<<a<<endl;

    a%=5;
    cout<<"a after modulo"<<a<<endl;

    b=5;
    b<<=1;
    cout<<"b after left shift"<<b<<endl;
   
    return 0;
}