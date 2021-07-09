#include<iostream>
using namespace std;

class node{
    public: int data;
    node*next;

    //constructor 

    node(int d){
        data =d;
        next=NULL;

    }

};

//LINKED CLASSES
// we dont use this fucntion procedural programming used ans asked in interviews

//fucntion(procedural programming)


// passing [pointer] by reference
void insertathead(node*&head,int d){
    if(head==NULL){
        head=new node(d);
        return;
    }

    node *n = new node(d);
    n->next =head;
    head=n;

}
// by value
void print(node*head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;

    }
    cout<<endl;

}
int main(){
    node*head =NULL;
    insertathead(head,3);
    insertathead(head,5);
    insertathead(head,2);
    insertathead(head,4);
    insertathead(head,1);
    insertathead(head,0);

    print(head);
    print(head);// we get two outputs bcoz we use pointer by value not by refernce if we use pointer by reference we get only 1 output

return 0;
}