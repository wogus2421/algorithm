#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<math.h>
#include<limits.h>
using namespace std;
#pragma warning(disable:4996)
int arr[10010];
int dp[110][110];
int main() {

	int n, k;
	scanf("%d %d", &n, &k);
	vector<int> coin(n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &coin[i]);
		dp[0][coin[i]] = 1;
	}
	sort(coin.begin(), coin.end());
	for (int i = 0; i < k + 1; i++) {
		for (int j = 0; j < k + 1; j++) {
			for (int l = 0; l < n; l++) {
				if (j - i < coin[l])
					break;
				dp[i][j]+=dp[i][]
			}
			
		}
	}

	return 0;
}