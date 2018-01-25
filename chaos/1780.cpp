#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;
#pragma warning(disable:4996)
int zp = 0;
int op = 0;
int mp = 0;
void qtree(int x, int y, int n);
int arr[2200][2200];
int flag = 0;
int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			scanf("%d", &arr[j][i]);
	}
	qtree(0, 0, N);
	printf("%d\n%d\n%d\n", mp, zp, op);
}

void qtree(int x, int y, int n) {
	for (int i = x; i < x + n; i++) {
		if (flag == 1)
			break;
		if (arr[i][y] != arr[i + 1][y] && i <x + n - 1) {
			flag = 1;
			break;
		}
		for (int j = y; j < y + n - 1; j++) {
			if (arr[i][j] == arr[i][j + 1])
				continue;
			else {
				flag = 1;
				break;
			}
		}
	}
	if (flag == 0) {
		switch (arr[x][y])
		{
		case -1: mp++;
			break;
		case 0: zp++;
			break;
		case 1: op++;
			break;
		default:
			break;
		}
		return;
	}
	else if (flag == 1) {
		flag = 0;
		qtree(x, y, n / 3);
		qtree(x + n / 3, y, n / 3);
		qtree(x + n*2 / 3, y, n / 3);
		qtree(x, y + n / 3, n / 3);
		qtree(x + n / 3, y + n / 3, n / 3);
		qtree(x + n * 2 / 3, y + n / 3, n / 3);
		qtree(x, y + n * 2 / 3, n / 3);
		qtree(x + n / 3, y + n * 2 / 3, n / 3);
		qtree(x + n * 2 / 3, y + n * 2 / 3, n / 3);
		return;
	}
}