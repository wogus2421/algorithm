#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;
#pragma warning(disable:4996)

int main() {
	int k;
	int i = 0;
	int l;
	int arr[10] = { 0, };
	cin >> k;
	if (k == 0) {
		printf("1");
		return 0;
	}
	for (int j = 0; j < 10; j++) {
		if (k == 0)
			break;
		arr[k % 10]++;
		k = k / 10;
	}

	l = arr[6] + arr[9];
	l % 2 == 1 ? l++ : l;
	arr[6] = l / 2;
	arr[9] = l / 2;
	l = 0;
	for (int j = 0; j < 10; j++) {
		l = max(l, arr[j]);
	}
	printf("%d", l);


	return 0;
}