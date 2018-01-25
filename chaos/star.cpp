#include<iostream>
using namespace std;
#pragma warning(disable:4996)
int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		int j = N-i;
		for (int k = 0; k < j-1; k++) { printf(" "); }
		for (int l = 0; l < 2 * i + 1; l++) { printf("*"); }
		printf("\n");
	}
	return 0;
}