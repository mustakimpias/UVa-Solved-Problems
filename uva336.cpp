#include<bits/stdc++.h>
using namespace std;

int connection, TTL, source, cnt;
map <int, vector<int>> graph;

void clearGraph()
{
	graph.clear();
}

void bfs(int startingNode)
{
	map <int, int> vis;
	queue <int> que;
	cnt = graph.size();
	vis[startingNode] = 0;
	que.push(startingNode);

	while(!que.empty())
	{
		int node = que.front();
		que.pop();
		cnt--;
		if(vis[node] < TTL)
		{
			for(int i = 0; i < graph[node].size(); i++)
			{
				int nextNode = graph[node][i];
				if(vis.count(nextNode) == 0)
				{
					vis[nextNode] = vis[node] + 1;
					que.push(nextNode);
				}
			}
		}
	}
}

int main()
{
	int cases = 0;

	while(cin >> connection && connection)
	{
		clearGraph();
		int n1, n2;
		for(int i = 0; i < connection; i++)
		{
			cin >> n1 >> n2;
			graph[n1].push_back(n2);
			graph[n2].push_back(n1);
		}

		while(cin >> source >> TTL)
		{
			if(TTL == 0 && source == 0)
				break;
			bfs(source);
			cout << "Case " << ++cases << ": " << cnt << " nodes not reachable from node " << source << " with TTL = " << TTL <<"." << endl;
		}
	}
	return 0;
}
