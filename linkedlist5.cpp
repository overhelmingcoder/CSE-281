//insert at point

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

 node* addatpoint(node* head, int d, int p)
 {
     struct node *ptr1,*ptr2;
     ptr1=head;
     ptr2=new node();
     ptr2->data=d;
     ptr2->next=NULL;
     p--;
     while(p!=1)
     {
         ptr1=ptr1->next;
         p--;
     }
     ptr2->next=ptr1->next;
     ptr1->next=ptr2;


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

    //addatpoint(node* head, int d, int p)

   addatpoint(a,40,2);

  traversell(a);
//Traverse the Linked list



}
