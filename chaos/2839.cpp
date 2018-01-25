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
	for (int i = 1; i < 10010; i++)
		arr[i] = INT_MAX - 100;
	int n ;
	scanf("%d", &n);
	vector<int> coin;
	coin.push_back(3);
	coin.push_back(5);
	
	

	for (int i = 1; i < n+1; i++) {
		for (int j = 0; j < 2; j++) {
			if (i < coin[j])
				break;
			arr[i] = min(arr[i - coin[j]] + 1, arr[i]);
		}
	}
	if (arr[n] != INT_MAX - 100)
		printf("%d", arr[n]);
	else
		printf("-1\n");
	return 0;
}