#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<math.h>
#include<limits.h>
using namespace std;
#pragma warning(disable:4996)
int arr[10001];
int main() {
	int k;
	for (int i = 1; i < 10001; i++) {
		if (arr[i] == 0)
			printf("%d\n", i);
		k = i + i % 10 + (i % 100)/10 + (i % 1000)/100 +(i/1000);
		arr[k] = 1;
	}
	return 0;
}