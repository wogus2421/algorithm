#include<iostream>
#include<vector>
#include<algorithm>
#pragma warning(disable:4996)
using namespace std;

int main() {
	int result = 0;
	int n;
	scanf("%d", &n);
	int* array = new int[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &array[i]);
	}
	sort(&array[0], &array[n]);
	for (int i = 0; i < n; i++) {
		result += (array[i])*(n - i );
	}

	printf("%d\n", result);

	return 0;
}