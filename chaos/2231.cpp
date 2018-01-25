#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<math.h>
#include<limits.h>
using namespace std;
#pragma warning(disable:4996)

int main() {
	int n;
	int result = 0;
	int k,l,m;
	cin >> n;
	for (int i = 0; i < n; i++) {
		l = k = i;
		for (int j = 0; j<8; j++) {
			k += l % 10;
			l = l / 10;
		}
		if (k == n) {
			result = i;
			break;
		}
	}
	printf("%d", result);

	return 0;
}