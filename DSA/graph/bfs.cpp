#include <bits/stdc++.h>
using namespace std;

/**

Input:

6 5
1 2
1 3
2 4
2 5
3 6
1

Output:
1 2 3 4 5 6

**/

int visited[100];
vector <int> adj[100];
void bfs(int n, int s) {
    // for(int i=0; i<n; i++)
    //     visited[i] = 0;
    queue<int>q;
    q.push(s);
    visited[s] = 1;//parent node visited kore dicchi
    while(!q.empty()) {//queue-r vitor child node visit krtesi
        int u = q.front();
        q.pop();
        //printf("%d ", u);
        for(int i=0; i<adj[u].size(); i++) {
            int v = adj[u][i];
            //cout<<u<< " " <<v<<endl;
            if(visited[v] == 0) {
                visited[v] = 1;
                q.push(v);
            }
        }
    }
    printf("\n");
}


int main()
{
    int n, s, edges, a, b;
    scanf("%d%d", &n, &edges);
    // n = no. of vertices and edges =no. of edges
    for(int i=0; i<edges; i++){
        scanf("%d%d", &a, &b);
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    scanf("%d", &s); //s = source node
    bfs(n, 2);
    return 0;
}


