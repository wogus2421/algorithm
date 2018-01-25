#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<math.h>
#include<limits.h>
using namespace std;
#pragma warning(disable:4996)
#define infinity 999999999
int dp[1010][1010][3];
int arr[1010][1010];
int n, m;
int result;
int solve(int x, int y, int dir);

int main() {
	scanf("%d %d", &n, &m);
	for (int i = 1; i < n + 1; i++)
		for (int j = 1; j < m + 1; j++)
			scanf("%d", &arr[i][j]);

	for (int i = 1; i < 1010; i++)
		for (int j = 1; j < 1010; j++)
			dp[i][j][0] = dp[i][j][1] = dp[i][j][2] = -INT_MAX;

	
	result = max(dp[n][m][0], max(dp[n][m][1], dp[n][m][2]));
	printf("%d", result);
	return 0;
}

int solve(int x, int y, int dir)
{
	if (y == n - 1 && x == m - 1)
		return 0;
	int &ret = dp[y][x][dir];
	if (ret != infinity)
		return ret;
	ret = 0;
	for (int i = 0; i < 3; ++i)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		for (int j = 0; j<3; ++j)
			ret = max(ret, solve(ny, nx, j) + arr[y][x]);
	}
	return ret;
}