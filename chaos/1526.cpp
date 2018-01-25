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
	cin >> n;
	int flag = 0;
	int check = 0;
	int k;
	for (int i = n; i >= 4; --i) {
		k = i;
		for (int j = 1; j < 9; j++) {
			if (i% (int)pow(10,j) == i) {
				flag = j;
				break;
			}
		}
		for (int j = 0; j < flag; j++) {
			check = 1;
			if (k % 10 != 4 && k % 10!= 7) {
				check = 0;
				break;
			}
			k = k / 10;
		}
		if (check == 1) {
			n = i;
			break;
		}
	}
	printf("%d\n", n);
	return 0;
}