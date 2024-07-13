#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;

    node(int d)
    {
        data=d;
        next=nullptr;
    }

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


node*addend(node* head,int d)
{
    struct node *ptr,*temp;
    ptr=head;
    temp= new node(d);

   // temp->next=NULL;

    while(ptr->next!= NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;

}


 node* addbeg(node* head, int d)
 {
     struct node *ptr;
     ptr=new node(d);


    // ptr->next=NULL;
     ptr->next=head;
     head=ptr;

     //traverse(head); show garbage

 }

 node* addatpoint(node* head, int d, int p)
 {
     struct node *ptr1,*ptr2;
     ptr1=head;
     ptr2=new node(d);
    // ptr2->data=d;
     ptr2->next=NULL;
     p--;
     while(p!=1)
     {
         ptr1=ptr1->next;
         p--;
     }
     ptr2->next=ptr1->next;
     ptr1->next=ptr2;

     //traverse(head);

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

  node*del_first( node*a)
{
  if(a==NULL)
  {
      cout<<"empty"<<endl;
  }
  else{
     node*temp=a;
    a=a->next;
    free(temp);
    temp=NULL;
  }
  return a;
}

node*del_last( node*a) //using structure is not needed.
{
    if(a==NULL)
    {
        cout<<"empty"<<endl;
    }
   /* else if(a->next==NULL)
    {
        free(a);
        a=NULL;
    }*/
    else
    {
        node*temp=a;
        node*temp2=a;
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
    del_last(a);
    a=del_first(a);// for delete function traverse is nedded.
    a=addatpoint(a,10,2);//added traverse in function

    a=addbeg(a,1000);// giving a= is important.
     addend(a,9);
      traverse(a);






}
