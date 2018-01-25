#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;
#pragma warning(disable:4996)

void qtree(int x, int y, int n);
int arr[100][100];
int flag = 0;
int main() {
	int N;
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			scanf("%1d", &arr[j][i]);
	}
	qtree(0, 0, N);

}
void qtree(int x, int y, int n) {
	for (int i = x; i < x + n; i++) {
		if (flag == 1) {
			break;
		}
		if (arr[i][y] != arr[i+1][y] && i <x+n-1) {
			flag = 1;
			break;
		}
		for (int j = y; j < y + n-1; j++) {
			if (arr[i][j] == arr[i][j + 1])
				continue;
			else {
				flag = 1;
				break;
			}
		}
	}
	if (flag == 0) {
		printf("%d", arr[x][y]);
		return;
	}
	else if (flag == 1) {
		flag = 0;
		printf("(");
		qtree(x, y, n / 2); 
		qtree(x + n / 2, y, n / 2); 
		qtree(x, y + n / 2 , n / 2);
		qtree(x + n / 2 , y + n / 2 , n / 2);
		printf(")");
		return;
	}
}