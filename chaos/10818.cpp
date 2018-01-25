#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#pragma warning(disable:4996)
using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	vector<int> k(n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &k[i]);
	}
	sort(k.begin(), k.end());
	printf("%d %d\n", k.front(), k.back());
	return 0;
}