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

//LINKED CLASSES
// we dont use this fucntion procedural programming used ans asked in interviews

//fucntion(procedural programming)

// passing [pointer] by reference
void insertathead(node *&head, int d)
{
    if (head == NULL)
    {
        head = new node(d);
        return;
    }

    node *n = new node(d);
    n->next = head;
    head = n;
}
// by value
void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << endl;
}
int length(node *head)
{
    int cnt = 0;
    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}
void insertAtTail(node *&head, int data)
{
    if (head == NULL)
    {
        head = new node(data);
        return;
    }
    node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    tail->next = new node(data);
    return;
}
void insertinmiddle(node *&head, int data, int p)
{
    //corner cases

    if (head == NULL or p == 0)
    {
        insertathead(head, data);
    }
    else if (p > length(head))
    {
        insertAtTail(head, data);
    }
    else
    {
        int jump = 1;

        node *temp = head;
        while (jump <= p - 1)
        {
            temp = temp->next;
            jump++;
        }
        //CREATE new node

        node *n = new node(data);
        n->next = temp->next;
        temp->next = n;
    }
}

void deletehead(node *&head)
{

    if (head == NULL)
    {
        return;
    }
    node *temp = head->next;
    delete head;
    head = temp;
}

//  searching
// bool search(node*head,int key){
//     node(temp!=NULL){
//         if(head->data==key){
//             return true;

//         }
//         head=head->next;
//     }
//     return false;
// }
//we can write it as recurcively also

bool searchrecurcive(node *head, int key)
{
    if (head == NULL)
    {
        return false;
    }
    if (head->data = key)
    {
        return true;
    }
    else
    {
        return searchrecurcive(head->next, key);
    }
}


node*takeinput(){
    int d;
    cin>>d;
    
    node*head=NULL;
    while(d!=-1){
        insertathead(head,d);
        cin>>d;

        return head;

    }
}
void reverse(node*&head)
{
    node *c = head;
    node *p = NULL;
    node *n;

    while (c!= NULL)
    {
        //save the next node
        n = c->next;
        //make the current node point to previous node
        c->next = p;

        //update p and c take them 1 step forward

        p = c;
        c = n;
    }
    head = p;
}

node*recreverse(node*head){
    // smallest linked list
    if(head->next==NULL or head==NULL){
        return head;
    }
    //rec case
   
   node*shead=recreverse(head->next);
   
   head->next->next=head;
   head->next=NULL;
   return shead;

}

int main()
{

    // node *head = NULL;
    // insertathead(head, 3);
    // insertathead(head, 5);
    // insertathead(head, 2);
    // insertathead(head, 4);
    // insertathead(head, 1);
    // insertathead(head, 0);
    // print(head); // we get two outputs bcoz we use pointer by value not by refernce if we use pointer by reference we get only 1 output

    // insertinmiddle(head, 9, 3);
    // insertAtTail(head, 7);
    // print(head);

    // deletehead(head);
    // print(head);

    // int key;
    // cin >> key;

    // if (searchrecurcive(head, key))
    // {
    //     cout << "element  found";
    // }

    // else
    // {
    //     cout << "element not  found";
    // }


    // node*head=takeinput();
    // print(head);

    // node*head;
    // cin>>head;
    // cout<<head;
     
     
     node*head;
    cin >> head;
    cout<<head;
    recreverse(head);
    cout<<head;
    



    
    return 0;
}


