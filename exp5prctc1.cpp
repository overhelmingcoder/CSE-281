#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node*left;
    node*right;

    node(int d)
    {
        data=d;
        left=right=NULL;
    }
};

void inordrtrvrs(node*temp)
{
    if(temp==NULL)
    {
        return;
    }
    inordrtrvrs(temp->left);
    cout<<temp->data<<" ";
     inordrtrvrs(temp->right);

}

void preorder(node*temp)
{
    if(temp==NULL)
    {
        return;
    }
    cout<<temp->data<<" ";
    preorder(temp->left);
    preorder(temp->right);

}

void postorder(node*temp)
{
    if(temp==NULL)
    {
        return;
    }
    postorder(temp->left);
    postorder(temp->right);
    cout<<temp->data<<" ";

}

int main()
{
    node*root=new node(50);
    root->left=new node(17);
    root->right=new node(72);
    root->left->left=new node(12);
    root->left->right=new node(23);
    root->right->left=new node(54);
    root->right->right=new node(76);

    root->left->left->left=new node(9);
    root->left->left->right=new node(14);
    root->left->right->right=new node(19);
    root->right->left->right=new node(67);

     cout<<"Inorder Traversal of Tree 1: "<<endl;
    inordrtrvrs(root);

    cout<<"\nPreorder Traversal of Tree 1: "<<endl;
    preorder(root);

    cout<<"\nPostorder Traversal of Tree 1: "<<endl;
    postorder(root);



    node*root1=new node(1);
    root1->left=new node(3);
    root1->left->left=new node(5);
    root1->left->right=new node(2);
    root1->left->left->right=new node(4);
    root1->left->left->right->right=new node(11);
    root1->left->right->left=new node(7);
    root1->left->right->left->right=new node(9);
    root1->left->right->right=new node(8);
    root1->left->right->right->right=new node(13);
    root1->left->right->right->right->right=new node(12);


    cout<<"\n\nInorder Traversal of Tree 2: "<<endl;
    inordrtrvrs(root1);

    cout<<"\nPreorder Traversal of Tree 2: "<<endl;
    preorder(root1);

    cout<<"\nPostorder Traversal of Tree 2: "<<endl;
    postorder(root1);

    cout<<endl;


}
