#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<math.h>
#include<limits.h>
using namespace std;
#pragma warning(disable:4996)
int arr[1010];
int path[1010];
int n;
int main() {
	for (int i = 1; i < 1010; i++)
		path[i] = INT_MAX;
	path[0] = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	if (n == 1) {
		printf("0");
		return 0;
	}
	if (arr[0] == 0) {
		printf("-1");
		return 0;
	}
	for (int i = 0; i < n; i++) {
		if (path[i] == INT_MAX)
			continue;
		for (int j = i; j <= i+arr[i]; j++) {
			path[j] = min(path[i] + 1, path[j]);
		}
	}
	if (path[n-1]==INT_MAX)
		path[n - 1] = -1;
	printf("%d", path[n-1]);
	return 0;
}
