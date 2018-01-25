#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<math.h>
#include<limits.h>
using namespace std;
#pragma warning(disable:4996)
vector<int> k;
int main() {
	int n, m,l;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n + m; i++) {
		scanf("%d", &l);
		k.push_back(l);
	}
	sort(k.begin(), k.end());
	for (int i = 0; i < k.size(); i++) {
		printf("%d ", k[i]);
	}
	return 0;
}