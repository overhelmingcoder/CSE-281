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

node* deletekthnode(node *head,int k)
{
    node *temp=head,*prev=NULL,*fr=NULL;

    int cnt=0;

    while(temp!=NULL)
    {
        cnt++;
        if(cnt==k)
        {
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    fr=temp->next;
    prev->next=fr;

    delete temp;
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


       a= deletekthnode(a,2);

       while(a!=NULL)
       {
           cout<<a->data<<" ";
           a=a->next;
       }
    }
