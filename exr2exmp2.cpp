#include<bits/stdc++.h>

using namespace std;


struct node
{
    int data;
    node *next;

    node(int x)
    {
        data=x;
        next=NULL;
    }


};

node * reverselist(node *head)
{
    node *p,*c=NULL;

    while(head!=NULL)
    {
        c=head->next;
        head->next=p;
        p=head;
        head=c;
    }
    head=p;
    return head;

    }
    int main()
    {
        node *a,*b,*c,*d;
        a=new node(2);
        b=new node(4);
        c=new node(5);
        d=new node(7);
        a->next=b;
        b->next=c;
        c->next=d;
        d->next=NULL;


       a= reverselist(a);

       while(a!=NULL)
       {
           cout<<a->data<<" ";
           a=a->next;
       }
    }

