#include <iostream>

#include <string>

using namespace std;

int main()
{
    //string init

    string s0;

    string s1("hello");

    string s2 = "VishalNimesh";

    string s3(s2);
    string s4(s3);

    char a[] = {'a', 'b', 'c', '\0'};

    string s5(a);

    cout << s0 << endl;
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;

    if (s0.empty())
    {
        cout << "s0 is an empty string"<<endl;
    }

    //append

    s0.append("i love my life");
    cout << s0 << endl;

    s0 += "more than my love";

    cout << s0 << endl;

    // //remove

    // cout<<s0.lenght()<<endl;

    // s0.clear();

    // cout<<s0.lenght()<<endl;

    //compare two strings

    s0 = "apple";
    s1 = "mango";

    cout << s1.compare(s1) << endl; //gives lexi value

    //overload operator

    if (s1 > s0)
    {
        cout << "mango is lexi greater than apple" << endl;
    }

    cout << s1[0] << endl;

    //find sub strings

    string s = "i want to have apple juice";

    int idx = s.find("apple");

    cout << idx << endl;


    // //remove a word from string

    // string word = "apple";

    // int len=word.lenght();

    // cout<<s<<endl;

    // s.erase(idx,len+1);

    // cout<<s<<endl;



    // //iterateover all the characters in the string

    // for(int i=0;i<s1.lenght();i++){
    //     cout<<s1(i)<<":";
    // }

    //iterators

    for (auto it = s1.begin(); it != s1.end(); it++)
    {
        cout << (*it) << ",";
    }
    cout<<endl;

    //for each loop

    for (char c : s1)
    {
        cout << c << ".";
    }

    return 0;
}