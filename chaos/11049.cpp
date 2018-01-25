#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<math.h>
#include<limits.h>
using namespace std;
#pragma warning(disable:4996)
vector<pair<int, int>> dq(500);
int dp[501][501];
int arr[501];
int result = 0;
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &(dq[i].first), &(dq[i].second));
	}
	for (int i = 0; i < n; i++) {
		arr[i] = dq[i].first;
	}
	arr[n] = dq[n - 1].second;
	for (int diag = 0; diag < n; diag++) {
		for (int i =1; i <= n-diag; i++) {
			int j = diag + i;
			if (i == j)
				continue;
			dp[i][j] = INT_MAX;
			for (int k = i; k < j; k++) {
				dp[i][j] = min(dp[i][k] + dp[k + 1][j] + arr[i - 1] * arr[k] * arr[j], dp[i][j]);
			}
		}
	}
	printf("%d", dp[1][n]);
	return 0;
}