#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n>> m;
    vector<pair<int, int> > g[n+1];
    vector<int> distTo(n+1, INT_MAX);

    for(int i=0;i<m;i++)
    {
        int x,y;
        cin >> x >> y;
        g[x].push_back({y, 0});
        g[y].push_back({x, 1});
    }
    int source,dest;
    
	cin >> source >> dest;
	
	priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > pq;// min-heap ; In pair => (dist,from)
	 
	
	distTo[source] = 0;
	pq.push(make_pair(0,source));	// (dist,from)
	
	while( !pq.empty() ){
		//int dist = pq.top().first;
		int prev = pq.top().second;
		pq.pop();
		
		//vector<pair<int,int> >::iterator it;
		//for( it = g[prev].begin() ; it != g[prev].end() ; it++){
        for(auto it: g[prev]){
			int next = it.first;
			int nextDist = it.second;
			if( distTo[next] > distTo[prev] + nextDist){
				distTo[next] = distTo[prev] + nextDist;
				pq.push(make_pair(distTo[next], next));
			}
		}
		
	}

    if(distTo[dest] == INT_MAX) cout<< "not possible";
    else
        cout<< distTo[dest]<< endl;
    return 0;
}

