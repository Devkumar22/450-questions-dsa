#include <bits/stdc++.h>
using namespace std;

int minspan(int graph[6][6], int n)
{
    vector<pair<int,int>> adj[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(graph[i][j])
            {
                adj[i].push_back(make_pair(j,graph[i][j]));
                adj[j].push_back(make_pair(i,graph[i][j]));
            }
        }
    }

    vector<int> key(n,INT_MAX);
    vector<int> parent(n, -1);
    vector<bool> mst(n, false);

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>> > pq;
    pq.push({0,0});

    key[0]=0;
    parent[0]=-1;
    for(int k=0;k<n;k++)
    {

        for(int u=0;u<n;u++)
        {
            int minima=INT_MAX, smallestedge;
            if(mst[u]==false and key[u]<minima)
            {
                minima=key[u];
                smallestedge=u;
            }
        }

        int node=pq.top().second;
        pq.pop();
        mst[node]=true;
        for(auto it: adj[node])
        {
            int neighbour = it.first;
            int weight = it.second;
            if(mst[neighbour]==false and key[neighbour]>weight)
            {
                    parent[neighbour]=node;
                    pq.push({weight, neighbour});
                    key[neighbour]=weight;
            }
        }
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=key[i];
    }
    //cout<<ans<<endl;
return ans;

}


int main() {
    int graph[][6] = {{0, 1, 1, 100, 0, 0},
         {1, 0, 1, 0, 0, 0},
         {1, 1, 0, 0, 0, 0},
         {100, 0, 0, 0, 2, 2},
         {0, 0, 0, 2, 0, 2},
         {0, 0, 0, 2, 2, 0}};
    cout<<"minimum cost to connect all cities is - "<<minspan(graph,6)<<endl;
return 0;
}
