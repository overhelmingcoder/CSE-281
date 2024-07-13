#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node*prev;
    node* next;

    node(int d)
    {
        data=d;
        prev=next=nullptr;
    }

};

node *addatbeg(node*head,int d) //asterics before the function name.
{
    node *temp=new node(d);
    /*temp->prev=NULL;
    temp->data=d;
    temp->next=NULL;*/

    temp->next=head;
    head->prev=temp;
    head=temp;

    //return head;  return na use korle o hobe

};

traverse(node *temp)
{
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
}

int main()
{
    node *a,*b,*c,*d=NULL;

    a=new node(1);
    b=new node(2);
    c=new node(3);
    d=new node(4);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=NULL;

    traverse(a);
    a=addatbeg(a,10);

     traverse(a);


}
