#include<iostream>
#include<queue>
#pragma warning(disable:4996)
using namespace std;
int main() {
	queue<int> q;
	int n;
	int m;
	int temp;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		q.push(i + 1);
	}
	printf("<");
	for (int i = 1;i<n*m+1;i++) {
		if (q.empty()) {
			break;
		}
		if ((i % m) == 0) {
			temp = q.front();
			q.pop();
			if (q.empty()) {
				printf("%d>", temp);
			}
			else {
				printf("%d, ",temp);
			}
		}
		else {
			temp = q.front();
			q.pop();
			q.push(temp);
		}	
	}
}