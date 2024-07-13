//Write a C++ program to find the traversal of the following graphs (Figure1). [Choose a random node as a source]
#include<bits/stdc++.h>
using namespace std;
vector<int> adj[100];
int visited[100]; // create an array with all zero values
// BFS function
vector<int>Bfs(int source)
/*
The line vector<int> Bfs(int source) declares a function named Bfs that returns a vector of integers. Let's break it down:

vector<int>: This specifies the return type of the function. It indicates that the function will return a vector of integers.
Bfs(int source): This is the function declaration. It specifies the function name (Bfs) and its parameter list (int source). The function takes an integer parameter source, which represents the starting node or vertex for a breadth-first search (BFS) traversal.
In summary, the Bfs function is expected to perform a BFS traversal starting from the specified source node and return a vector containing the order in which nodes were visited during the traversal, typically representing the BFS traversal path
*/
{
    vector<int>bfs;
    queue<int> q; // declare a empty queue. Queues are commonly used in BFS algorithms to keep track of the nodes to visit.


    visited[source] = 1; //This line marks the source node as visited by setting its corresponding entry in the visited array to 1. The visited array is used to keep track of which nodes have been visited during the BFS traversal.
    q.push(source); // push source node into queue
    while (!q.empty()) //This line starts a while loop that continues as long as the queue q is not empty. This loop will iterate until all nodes reachable from the source node have been visited.
    {
        int node = q.front(); // front element of the queue
        q.pop(); // pop the node .This two line starts a while loop that continues as long as the queue q is not empty. This loop will iterate until all nodes reachable from the source node have been visited.
        bfs.push_back(node); //This line adds the visited node (node) to the end of the bfs vector, indicating the order in which nodes are visited during the BFS traversal.
        for (auto it: adj[node])
            //This line starts a range-based for loop that iterates over each neighbor (it) of the current node (node).
            // The adj array represents the adjacency list of the graph, where adj[node] contains the neighbors of the node.
        {
            int nxt_node = it; // the neighbour node.This line assigns the current neighbor (it) to the variable nxt_node, indicating the next node to visit in the BFS traversal.
// This if statement checks if the neighbor node (nxt_node) has been visited before. If it has, the loop skips to the next iteration (skipping this neighbor node).
            if (visited[nxt_node])
                continue;
            visited[nxt_node] = 1;
            q.push(nxt_node); // push into the queue. These lines mark the neighbor node (nxt_node) as visited and add it to the end of the queue q, indicating that it will be visited in a future iteration of the BFS traversal.
        }
    }
    return bfs;
    //This line returns the vector bfs, which contains the order in which nodes were visited during the BFS traversal. This vector represents the BFS traversal path or order of traversal.
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
    bfs = Bfs(source); //bfs is the vector containing the BFS traversal order
// print the values.this code segment prints the order of nodes visited during the BFS traversal, which represents the breadth-first search path or order of traversal in the graph.
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
