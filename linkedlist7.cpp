//Write a C++ program to delete the first node of a Singly Linked List.

#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
node*next;
};
travashll(node*head){
while(head!=NULL){
    cout<<head->data<<" " ;
    head=head->next;
}

}
addend(node*head,int d){
struct node*ptr,*temp;
ptr=head;
temp=(node*)malloc(sizeof(node));
temp->data=d;
temp->next=NULL;
while(ptr->next!=NULL){
    ptr=ptr->next;
}
ptr->next=temp;
travashll(temp);



}
struct node*del_first(struct node*a)
{
  if(a==NULL)
  {
      cout<<"empty"<<endl;
  }
  else{
    struct node*temp=a;
    a=a->next;
    free(temp);
    temp=NULL;
  }
  return a;
}

int main(){
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
a=del_first(a);
node*ptr=a;
while(ptr!=NULL)
{
    cout<<ptr->data<<" ";
    ptr=ptr->next;
}
return 0;

}
