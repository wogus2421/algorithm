#include<iostream>
#include<queue>
#include<cstdio>
#include<functional>
#pragma warning(disable:4996)
using namespace std;
int main() {
	priority_queue<int, vector<int>, greater<int>> pq;
	int N;
	int k;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &k);
		pq.push(k);
	}
	while (!pq.empty())
	{
		printf("%d\n", pq.top());
		pq.pop();
	}
	return 0;
}