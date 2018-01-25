#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#pragma warning(disable:4996)

int main() {
	int n, k;
	int count = 0;
	int checkpoint = 0;
	scanf("%d %d", &n, &k);
	int* array = new int[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &array[i]);
	}
	for (int i = n - 1; i > -1; i--) {
		checkpoint = k / array[i];
		if (checkpoint == 0)
			continue;
		k = k - array[i] * checkpoint;
		count += checkpoint;
		checkpoint = 0;
	}
	printf("%d\n", count);
	return 0;
}