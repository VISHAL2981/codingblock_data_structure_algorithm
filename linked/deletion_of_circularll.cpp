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
    cout << temp->data << endl;
    return;
}

//deletion in circular linked List

node *getnode(node *head, int data)
{
    node *temp = head;
    //for all  node except last node=search
    while (temp->next != head)
    {
        if (temp->data == data)
        {
            return temp;
        }
        temp = temp->next;
    }
    //out of the loops

    if (temp->data == data)
    {
        return temp;
    }
    return NULL;
}

void deletenode(node *&head, int data)
{
    node *del = getnode(head, data);
    if (del == NULL)
    {
        return;
    }
    //other wise
    if (head == del)
    {
        head = head->next;
    }
    node *temp = head;

    //stop one step behind the node to be deleted

    while (temp->next != del)
    {
        temp = temp->next;
    }
    temp->next = del->next;
    delete del;
}

int main()
{
    node *head = NULL;
    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);
    insert(head, 6);
    insert(head, 7);
    insert(head, 8);
    insert(head, 9);
    print(head);

    deletenode(head, 3);
    print(head);
    
    deletenode(head, 5);
    print(head);
    
    deletenode(head, 7);
    print(head);
    
    deletenode(head, 9);
    print(head);
    deletenode(head, 1);
    print(head);

    deletenode(head, 2);
    print(head);
  
    deletenode(head, 8);
    print(head);
 
    deletenode(head, 6);
    print(head);

    return 0;
}
