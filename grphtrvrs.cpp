//Write a C++ program to find the traversal of the following graphs (Figure1). [Choose a random node as a source]
#include<bits/stdc++.h>
using namespace std;
vector<int> adj[100];
int visited[100]; // create an array with all zero values
// BFS function
vector<int>Bfs(int source)
{
    vector<int>bfs;
    queue<int> q; // declare a empty queue
    visited[source] = 1;
    q.push(source); // push source node into queue
    while (!q.empty())
    {
        int node = q.front(); // front element of the queue
        q.pop(); // pop the node
        bfs.push_back(node);
        for (auto it: adj[node])
        {
            int nxt_node = it; // the neighbour node
// if the neighbour has previously not been visited,
            if (visited[nxt_node]) continue;
            visited[nxt_node] = 1;
            q.push(nxt_node); // push into the queue
        }
    }
    return bfs;
}
int main()
{
    int i, j, k;
    int n, e;
    vector<int>bfs;
    cout<< "No.of Nodes: ";
    cin >> n;
    cout<< "No.of Edges: ";
    cin >> e;
    cout<<"Enter the edge connections: "<<endl;
// adjacency list
    for (i = 0; i < e; ++i)
    {
        int u, v; // edge inputs
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int source;
    cout<<"Enter the Source Node: "<<endl;
    cin >> source;
// call the BFS method
    bfs = Bfs(source);
// print the values
    for (auto it: bfs)
    {
        cout<<it<<" ";
    }
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
