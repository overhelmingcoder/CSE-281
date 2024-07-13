#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data ;
    node* next;

    node( int x)
     data=x;
    next=nullptr;
};


node* cnstrctll(int arr[],int arrsize)
{
    node *head=new node(arr[0]);
    node *current=head;
    for(int i=1;i<arrsize;i++)
    {
        node *temp=new node(arr[i]);
        current->next=temp;
        current=temp;
    }
    return head;
}

int main()
{
   int arr=[1 2 3 4]
   head=cnstrctll(arr,4);

    while (head!=nullptr)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}


}
