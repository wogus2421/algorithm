#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;
#pragma warning(disable:4996)
long long arr[110];
long long dp[110][21];

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	dp[0][arr[0]] = 1;
	for (int i = 1; i < n-1; i++) {
		for (int j = 0; j < 21; j++) {
			if (dp[i-1][j] == 0)
				continue;
			else {
				if(j+arr[i]<21&& j + arr[i]>=0)
					dp[i][j + arr[i]]+=dp[i-1][j];
				if(j - arr[i]>=0&& j - arr[i]<21)
					dp[i][j - arr[i]]+= dp[i-1][j];
			}
		}
	}
	printf("%lld\n", dp[n-2][arr[n-1]]);
}