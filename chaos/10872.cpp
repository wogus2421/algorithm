#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#pragma warning(disable:4996)
using namespace std;

int main() {
	int n;
	int result = 1;
	scanf("%d", &n);
	for (int i = 1; i < n+1; i++) {
		result = result*i;
	}
	printf("%d\n", result);

	return 0;

}