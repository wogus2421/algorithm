#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#pragma warning(disable:4996)
using namespace std;

int main() {
	int n;
	int a, b;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
	return 0;
}