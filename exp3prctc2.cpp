/*. Write a C++ program to insert an element at kth position in a singly linked
list. [Consider possible edge cases]*/


#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node*next;
};
travarsell(node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" " ;
        head=head->next;
    }

}
addatpoint(node*head,int d,int p)
{
    struct node*ptr1,*ptr2;
    ptr1=head;
    ptr2=(node*)malloc(sizeof(node));
    ptr2->data=d;
    ptr2->next=NULL;
    p--;
    while(p!=1)
    {
        ptr1=ptr1->next;
        p--;
    }
    ptr2->next=ptr1->next;
    ptr1->next=ptr2;




}
int main()
{
    node*a=NULL;
    node*b=NULL;
    node*c=NULL;
    a=(node*)malloc(sizeof(node));
    b=(node*)malloc(sizeof(node));
    c=(node*)malloc(sizeof(node));
    a->data=10;
    b->data=20;
    c->data=30;
    a->next=b;
    b->next=c;
    c->next=NULL;
    travarsell(a);
    cout<<endl;
    addatpoint(a,40,2);
    cout << "Linked list after inserting 40 at position 2: ";
    travarse ll(a);
    cout<<endl;

}
