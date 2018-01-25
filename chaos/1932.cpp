#include<iostream>
#include<vector>
#include<algorithm>
#pragma warning(disable:4996)
using namespace std;
int main() {
	int mat[500][500];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i + 1; j++) {
			scanf("%d", &(mat[i][j]));
		}
	}
	for (int i = n - 2; i >= 0; i--) {
		for (int j = i ; j >= 0; j--) {
			mat[i][j] = mat[i][j] + max(mat[i + 1][j], mat[i + 1][j + 1]);
		}
	}
	cout << mat[0][0] << endl;

	return 0;
}