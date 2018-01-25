#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#pragma warning(disable:4996)
int arr[10001];
int main() {
	int n;
	cin >> n;
	int k;
	for (int i = 0; i < n; i++) {
		scanf("%d", &k);
		arr[k]++;
	}
	for (int i = 1; i < 10001; i++) {
		for (int j = 0; j < arr[i]; j++) {
			printf("%d\n", i);
		}
	}
	return 0;
}