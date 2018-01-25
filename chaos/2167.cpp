#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<math.h>
#include<limits.h>
using namespace std;
#pragma warning(disable:4996)
int arr[310][310];
int psum[310][310];

int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	for (int i = 1; i < n+1; i++) {
		for (int j = 1; j < k+1; j++) {
			scanf("%d", &arr[i][j]);
			psum[i][j] = psum[i - 1][j] + psum[i][j - 1] - psum[i - 1][j - 1] + arr[i][j];
		}
	}
	int m;
	int x1, x2, y1, y2;
	scanf("%d",&m);
	for (int i = 0; i < m; i++) {
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		printf("%d\n", psum[x2][y2] - psum[x2][y1-1] - psum[x1-1][y2] + psum[x1-1][y1-1]);
	}
	return 0;
}