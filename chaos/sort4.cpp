#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
#pragma warning(disable:4996)

int main() {
	int N, K;
	int result = 0;
	scanf("%d %d", &N, &K);
	int* array = new int[N];
	int* cmparray = new int[K];

	for (int i = 0; i < N; i++) {
		scanf("%d", &array[i]);
	}
	for (int i = 0; i < N - K + 1; i++) {
		
		
		for (int j = 0; j < K; j++) {
			cmparray[j] = array[i + j];
		}
		sort(&cmparray[0], &cmparray[K]);
		result += cmparray[((K + 1) / 2)-1];
	}

	printf("%d", result);

	return 0;
}