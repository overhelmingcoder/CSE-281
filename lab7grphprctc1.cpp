//Write a C++ program to Represent the following graphs using an adjacency matrix (Figure 1)
#include<bits/stdc++.h>
using namespace std;
int adj[100][100];
int main()
{
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
        adj[n1][n2]=1;
        adj[n2][n1]=1;
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
      cout<<"The Adjacency Matrix : "<<endl;
    for(int i=0; i<node; i++)
    {
        for(int j=0; j<node; j++)
        {
            cout<<" "<<adj[i][j];
        }
        cout<<"\n" ;
    }
    return 0;


}
