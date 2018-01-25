#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#pragma warning(disable:4996)
using namespace std;

typedef struct vertex {
	int check = -1;
	vector<int> adj;
}vertex;
void DFS(vertex * graph,int v1);
int main() {
	int n;
	int m;
	int vd;
	int a, b;
	queue<int> k;
	scanf("%d %d %d", &n, &m, &vd);
	int v1 = vd;
	vertex *graph = new vertex[n];
	vertex *graph1 = new vertex[n];
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);
		graph[a - 1].adj.push_back(b);
		graph1[a - 1].adj.push_back(b);
		graph1[b - 1].adj.push_back(a);
	}
	for (int k = 0; k < n; k++) {
		reverse(graph1[k].adj.begin(), graph1[k].adj.end());
	}

	DFS(graph1, v1);

	cout << endl;
	
	for (int i = 0; i < n*n+1; i++) {
		if (graph[vd - 1].check != 0) {
			printf("%d ", vd);
			graph[vd - 1].check = 0;
			int size = graph[vd - 1].adj.size();
			for (int j = 0; j < size; j++) {
				k.push(graph[vd - 1].adj[j]);
			}
			vd = k.front();
		}
		else {
			vd = k.front();
			k.pop();
			if (k.empty())
				break;
		}
	}
	cout << endl;
	
	
	return 0;
}
void DFS(vertex * graph,int v1) {
	int v;
	int size = graph[v1 - 1].adj.size();
	for (int i = 0; i < size; i++) {
		if (graph[v1 - 1].check == 0) {
			v = graph[v1 - 1].adj.back();
			if (graph[v1 - 1].adj.empty())
				return;
			graph[v1 - 1].adj.pop_back();
			DFS(graph, v);
		}
		if (graph[v1 - 1].check == -1) {
			graph[v1 - 1].check = 0;
			printf("%d ", v1);
			if (graph[v1 - 1].adj.empty())
				return;
			v = graph[v1 - 1].adj.back();
			while (graph[v - 1].check != -1) {
				if (graph[v1 - 1].check == 0) {
					graph[v1 - 1].adj.pop_back();
					if (graph[v1 - 1].adj.empty())
						return;
					v = graph[v1 - 1].adj.back();
				}
			}
			graph[v1 - 1].adj.pop_back();
			DFS(graph, v);
		}

	}


	

}