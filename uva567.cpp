#include <bits/stdc++.h>
using namespace std;

#define N 22
vector <int> graph[N];

void bfs(int source, int destination)
{
	queue <int> que;
	int vis[N] = {0}, dist[N];
	vis[source] = 1;
	dist[source] = 0;
	que.push(source);
	
	while(!que.empty())
	{
		int node = que.front();
		que.pop();
		for(int i = 0; i < graph[node].size(); i++)
		{
			int nextNode = graph[node][i];
			if(vis[nextNode] == 0)
			{
				vis[nextNode] = 1;
				dist[nextNode] = dist[node] + 1;
				que.push(nextNode);
			}
		}
	}
	printf("%2d to %2d: %d\n", source, destination, dist[destination]);
}

int main()
{
	int n1, n2, test = 0;
	while(cin >> n1)
	{
		for(int i = 0; i < n1; i++)
		{
			cin >> n2;
			graph[1].push_back(n2);
			graph[n2].push_back(1);
		}
		for(int i = 2; i <= 19; i++)
		{
			cin >> n1;
			for(int j = 0; j < n1; j++)
			{
				cin >> n2;
				graph[i].push_back(n2);
				graph[n2].push_back(i);
			}
		}
		cout << "Test Set #" << ++test << endl;
		int n, source, destination;
		cin >> n;
		for(int i = 0; i < n; i++)
		{
			cin >> source >> destination;
			bfs(source, destination);
		}
		cout << endl;
		for(int i = 0; i < N; i++)
			graph[i].clear();
	}
	return 0;
}
