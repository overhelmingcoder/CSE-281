
//Create a single linked list.

#include<iostream>
#include<stdlib.h> //used for memory allocation,process control,conversions.
#include<bits/stdc++.h> //to include all standard libries
using namespace std;

// create a node data type.

struct node
{
    int data ;
    node* next;

};
traversell(node* a)
{

    while (a!=NULL)
    {
        cout<<a->data<<" ";
        a = a->next;
    }
}

int main()
{
//Initialize three nodes with NULL pointer
    //node *a =NULL,*b=NULL,*c=NULL;
    node *a,*b,*c=NULL;
// Allocate Memory for each node
    a=new node();
    b=new node();

    c = (node*) malloc(sizeof(node));
// Insert Data and Connect the nodes
    a->data = 10;
    b->data = 20;
    c->data = 30;
    a->next = b;
    b->next = c;
    c->next = NULL;
//Traverse the Linked list
    traversell(a);
}
