/*Write a C++ program to insert a node at the beginning of a DLL. [Consider
possible edge cases]*/

#include<bits/stdc++.h>
using namespace std;
struct node
{
    struct node*prev;
    int data;
    struct node*next;
};
struct node*addtoempty(struct node*head,int data)
{
    struct node*temp=(node*)malloc(sizeof(node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    head=temp;
    return head;


}

struct node*addtobeg(struct node*head,int data)
{
    struct node*temp=(node*)malloc(sizeof(node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    temp->next=head;
    head->prev=temp;
    head=temp;
    return head;




};
 node*addatend(struct node*head,int data)
{
    struct node*temp,*tp;
    temp=(node*)malloc(sizeof(node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    tp=head;
    while(tp->next!=NULL)
    {
        tp=tp->next;


    }
    tp->next=temp;
    temp->prev=tp;
    return head;

}

trvrsll(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main()
{
    struct node*head=NULL;
    struct node*ptr;
    head=addtoempty(head,5);
    head=addatend(head,10);
    head=addatend(head,20);
    head=addatend(head,30);

    ptr=head;
    trvrsll(ptr);

    head=addtobeg(head,1);
    cout<<endl;
    cout<<"Linked list after inserting at the begining:"<<endl;
    trvrsll(head);

    return 0;
}
