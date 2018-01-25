#include<iostream>
#include<algorithm>
using namespace std;
#pragma warning(disable:4996)

int main() {
	int k=0;
	scanf("%d", &k);
	int* array = new int[k];
	for (int i = 0; i < k; i++) {
		scanf("%d", &array[i]);
	}
	std::sort(&array[0], &array[k]);
	for (int i = 0; i < k; i++) {
		printf("%d\n", array[i]);
	}
	delete array;
	return 0;
}