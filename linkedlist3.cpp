//Insert a node at the end of the list.


#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
};
traversell(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}


addend(node* head,int d)
{
    struct node *ptr,*temp;
    ptr=head;
    temp=new node();
    temp->data=d;
    temp->next=NULL;

    while(ptr->next!= NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
   traversell(temp);
}



int main()
{
    node *a,*b,*c =NULL;
    a=new node();
    b=new node();
    c=new node();

    a->data=10;
    b->data=20;
    c->data=30;

    a->next=b;
    b->next=c;
    c->next=NULL;


  traversell(a);
   addend(a,40);






}
