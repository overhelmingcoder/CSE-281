//Write a C++ program to find the position of an element from a Singly Linked List [Linear Search].

#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node*next;
};
int cnt=1;
travarsll(node*head,int d)

{
    node*temp;
    temp=head;

    while(head!=NULL)

    {
        cout<<head->data<<" ";
        head=head->next;

    }


    int cnt=1;
    while(temp!=NULL)
    {
        if(temp->data==d)
        {
            cout<<endl;

            cout<<"The position of "<<d<<" is "<<cnt<<endl;
        }

        temp=temp->next;
        cnt++;
    }

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
    travarsll(a,20);








}
