#include <iostream>
#include <list>

using namespace std;

int main()
{

    list<int> l;

    //init
    list<int> l1{1, 2, 3, 10, 8, 5};

    //diffrent datatype

    list<string> l2{"apple", "carrot", "banana", "paneer", "guava"};

    l2.push_back("pineapple");

    //sorting

    l2.sort();

    //reverse

    l2.reverse();

    //     //pop front

    cout << l2.front() << endl;
    l2.pop_front();

    //     //add to the front the list_stl

    l2.push_front("kiwi");
    cout << l2.back() << endl;
    l2.pop_back();

    //iterate over the kisted and print the datatype

    for (string s : l2)
    {
        cout << s << "-->";
    }

    //some more functions int he list

    l2.push_back("orange");
    l2.push_back("lemon");

    for (string s : l2)
    {
        cout << s << "->-";
    }
    cout << endl;

    //remove a fruit from the list

    string f;
    cin >> f;
    l2.remove(f);

    for (string s : l2)
    {
        cout << s << "->-";
    }
    cout << endl;

    //erase one or more elements in the list

    auto it = l2.begin();
    it++;
    it++;

    l2.erase(it);

    for (string s : l2)
    {
        cout << s << "->-";
    }
    cout << endl;

    //we can insert elemnts in the list
    it = l2.begin();
    it++;
    l2.insert(it, "fruitjuice");

    for (string s : l2)
    {
        cout << s << "->-";
    }

    return 0;
}