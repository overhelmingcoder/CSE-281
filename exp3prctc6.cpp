/*Write a C++ program to delete the last node of a DLL. [Consider possible
edge cases] */


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
struct node*addatend(struct node*head,int data)
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
struct node*dellast(struct node*head)
{
    struct node*temp=head;
    struct node*temp2;
    while(temp->next!=NULL)
    {
        temp=temp->next;


    }
    temp2=temp->prev;
    temp2->next=NULL;
    delete temp;
    temp=NULL;
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
    node*ptr;
    head=addtoempty(head,1);
    head=addatend(head,10);
    head=addatend(head,20);
    head=addatend(head,30);

    ptr=head;
    trvrsll(ptr);

    head=dellast(head);
    cout<<endl;
    cout<<"Linked list after deleting the last node:"<<endl;
    trvrsll(head);

    return 0;
}

