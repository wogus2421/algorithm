#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#pragma warning(disable:4996)
using namespace std;
int main() {
	int n;
	int stair[310];
	int score[310];
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &(stair[i]));
	}
	score[1] = stair[1];
	score[2] = stair[2]+score[1];
	score[3] = stair[3] + max(score[1], stair[2]);
	for (int i = 4; i <= n; i++) {
		score[i] = stair[i] + max(score[i - 2], stair[i - 1]+score[i-3]);
	}

	cout << score[n]<<endl;

	return 0;
}