//Write a C++ program to delete the last node of a Singly Linked List.

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


struct node*del_last(struct node*a)
{
    if(a==NULL)
    {
        cout<<"empty"<<endl;
    }
    else if(a->next==NULL)
    {
        free(a);
        a=NULL;
    }
    else
    {
        struct node*temp=a;
        struct node*temp2=a;
        while(temp->next!=NULL)
        {
            temp2=temp;
            temp=temp->next;
        }
        temp2->next=NULL;
        free(temp);
        temp=NULL;
    }
    return a;
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
    a=del_last(a);
    node*ptr=a;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    return 0;







}
