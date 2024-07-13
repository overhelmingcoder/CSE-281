//A c++ program to find the length of a singly ;inked list.

#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node*next;
};
travashll(node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" " ;
        head=head->next;
    }


}
length(struct node*head)
{
    int count=1;
    if(head==NULL)
    {
        cout<<"linked list is empty"<<endl;
    }
    struct node*ptr=NULL;
    ptr=head;
    while(ptr->next!=NULL)
    {
        count++;
        ptr=ptr->next;
    }
    cout<<endl<<"the no of node is "<<" "<<count<<endl;

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
    travashll(a);//a=head pointer which is useful node for every
    //problem of linked list
    countnode(a);






}
