#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    //constructor

    node(int d)
    {
        data = d;
        next = NULL;
    }
};
void insert(node *&head, int data)
{
    node *n = new node(data);
    node *temp = head;

    n->next = head;
    if (temp != NULL)
    {

        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = n;
    }
    else
    {
        n->next = n;
    }

    head = n;
}

void print(node *head)
{
    node *temp = head;
    while (temp->next != head)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return;
}
int main()
{
    node *head = NULL;
    insert(head, 3);
    insert(head, 5);
    insert(head, 8);
    insert(head, 9);
    insert(head, 89);
    insert(head, 68);
    insert(head, 99);

    print(head);

    return 0;
}