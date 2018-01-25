#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<math.h>
#include<limits.h>
using namespace std;
#pragma warning(disable:4996)
long long dp[1010][1010][3];
int arr[1010][1010];
int check[1010][1010];
int n,m;
int result;
void road(int x, int y, int dir);
int flag;

int main() {
	scanf("%d %d", &n, &m);
	for (int i = 1; i < n+1; i++) 
		for (int j = 1; j < m+1; j++) 
			scanf("%d", &arr[i][j]);

	for (int i = 1; i < 1010; i++)
		for (int j = 1; j < 1010; j++)
			dp[i][j][0] = dp[i][j][1] = dp[i][j][2] = -INT_MAX;


	road(1, 1, 1);
	result = max(dp[n][m][0], max(dp[n][m][1], dp[n][m][2]));
	printf("%d", result);
	return 0;
}

void road(int x, int y, int dir)
{

		
	if (dir == 0) {
		dp[x][y][dir] = max(dp[x][y][dir], max(dp[x - 1][y][0], max(dp[x - 1][y][1], dp[x - 1][y][2])) + arr[x][y]);
		if (y != m) 
			road(x, y + 1, 1);
		if (y != 1) 
			road(x, y - 1, 2);
		if (x != n)
			road(x + 1, y, 0);
	}
	if (dir == 1) {
		dp[x][y][dir] = max(dp[x][y][dir], max(dp[x][y - 1][dir], dp[x][y - 1][0]) + arr[x][y]);
		if (y != m)
			road(x, y + 1, 1);	
		if (x != n)
			road(x + 1, y, 0);
		}
	if (dir == 2) {
		dp[x][y][dir] = max(dp[x][y][dir], max(dp[x][y + 1][0], dp[x][y + 1][2]) + arr[x][y]);
		if (y != 1)
			road(x, y - 1, 2);
		if (x != n)
			road(x + 1, y, 0);
		}

	return;
}
