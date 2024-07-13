
#include<bits/stdc++.h>
using namespace std;

struct node //no function sign
{
    int data;
    node*prev;
    node*next;
};

struct node *addatbeg(node*head,int d) //asterics before the function name.
{
    node *temp=new node();
    temp->prev=NULL;
    temp->data=d;
    temp->next=NULL;

    temp->next=head;
    head->prev=temp;
    head=temp;

    return head;

};

node *addatend(node*head,int d)
{
    node*temp1,*temp2=NULL;
    temp1=new node();
    temp1->prev=NULL;
    temp1->data=d;
    temp1->next=NULL;

    temp2=head;

    while(temp2->next!=NULL)
    {
        temp2=temp2->next;
    }
    temp2->next=temp1;
    temp1->prev=temp2;

    return head;
}

node*addatempty(node*head,int d)
{
    node *temp=new node();
    temp->prev=NULL;
    temp->data=d;
    temp->next=NULL;
    head=temp;
    return head;

}

node*delfrst(node*head)
{
    node*temp=head;
    head=head->next;

    delete temp;
    temp=NULL;
    head->prev=NULL;

     return head;
}

node*dellast(node*head)
{
    node*temp1,*temp2=NULL;
    temp1=head;


    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
    }
    temp2=temp1->prev;         //not next. now we need to delete the temp1 node.

     delete temp1;
    temp2->next=NULL;


    return head;
}


node*reverselist(node*head)
{
    node *prev,*next,*current=NULL;
    current=head;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;

        prev=current;
        current=next;


    }
    head=prev;
    return head;
}






traverse(node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }

}


int main()
{
    node *a,*b,*c=NULL;
    a=new node();
    b=new node();
    c=new node();
    a->data=10;
    b->data=20;
    c->data=30;
    a->prev=NULL;
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;
    c->next=NULL;



    a=addatbeg(a,3);// return head should be a or new variable

    a=addatbeg(a,1);
    a=addatend(a,100);
    a=addatend(a,1000);

    a=delfrst(a);

    a=dellast(a);

    //a=reverselist(a);

    traverse(a);

}
