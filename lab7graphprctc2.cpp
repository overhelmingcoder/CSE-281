//Write a C++ program to Represent the following graphs using an adjacency list (Figure 1)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec[11];
    int node,edge;
    cout<<"Enter the no. of nodes: " ;
    cin>>node;
    cout<<"Enter the no. of edges: " ;
    cin>>edge;
      cout<<"Enter the edge connections: "<<endl;
    int n1,n2;
    for(int i=0; i<edge; i++)
    {
        cin>>n1>>n2;
        vec[n1].push_back(n2);
        vec[n2].push_back(n1);

    }
    /* node:8
       edge:10
       for a:
    1 0
    1 2
    3 0
    3 7
    3 4
    7 4
    7 5
    4 5
    4 6
    5 6

 for b :
 node:9
 edges:10
0 8
8 4
0 3

3 4
3 2
2 7
7 1
0 1
2 5
5 6




      */
    cout<<"Adjacency List of the Graph: "<<endl;
    for (int j = 0; j<node; j++)
    {
        cout<<j<<" --> ";
        for(auto it: vec[j])
            /*
            The auto keyword is used to declare the loop variable it.
             Since the type of elements in vec[j] is not explicitly specified,
              auto allows the compiler to automatically deduce the correct type of it based on the type of elements stored in vec[j].
               This simplifies the code and makes it more flexible,
      especially when dealing with complex or templated container types where the exact type may be lengthy or cumbersome to write explicitly.

            auto it: This declares a loop variable it whose type is automatically deduced based on the type of elements stored in vec[j].
             The auto keyword allows the compiler to infer the type of it without explicitly specifying it.
            */
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }

}
