
//Finding the shortest distance from  an arbitrary source to all the nodes

#include<bits/stdc++.h>
using namespace std;
vector<int> adj[100];
int dis[100], visited[100];
// BFS( Breadth First Search) function    Depth First Search

void Bfs(int source)
{
    queue<int> q; // declare a empty queue
    dis[source] = 0;
    visited[source] = 1;
    q.push(source); // push source node into queue
    while (!q.empty())
    {
        int node = q.front(); // front element of the queue
        for (auto it: adj[node])
        {
            int nxt_node = it;
// already visited then skip
            if (visited[nxt_node])
                continue;

            dis[nxt_node] = 1 + dis[node];
            visited[nxt_node] = 1;
            q.push(nxt_node); // push into the queue
        }
// pop the node
        q.pop();
    }
}
int main()
{
    int i, j, k;
    int n, m;
    cout<< "No.of Nodes of Graph1 : "<<endl;
    cin >> n;
    cout<< "No.of Edges of Graph1: "<<endl;
    cin >> m;
    cout<<"Enter the edge connections: "<<endl;
    for (i = 0; i < m; ++i)
    {
        int u, v; // edge inputs
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int source1,source2 ;
    cout<<"Enter the Source1 Node: "<<endl;
    cin >> source1;
// call the BFS method
    Bfs(source1);
    cout<<endl;


    for (i = 0; i < n; ++i)
    {
        cout << "Distance " << source1 << " to " << i << " = " << dis[i]
             << endl;
    }
    /*
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

    */


    int n2, m2;
    cout<< "\n\nNo.of Nodes of graph2: "<<endl;
    cin >> n2;
    cout<< "No.of Edges of graph2: "<<endl;
    cin >> m2;
    cout<<"Enter the edge connections: "<<endl;
    for (i = 0; i < m2; ++i)
    {
        int u, v; // edge inputs
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout<<"Enter the Source2 Node: "<<endl;
    cin >> source2;
// call the BFS method
    Bfs(source2);
    for (i = 0; i < n2; ++i)
    {
        cout << "Distance " << source2 << " to " << i << " = " << dis[i]
             << endl;
    }
    /*
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
