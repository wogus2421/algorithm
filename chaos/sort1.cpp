#include<iostream>
#pragma warning(disable:4996)
using namespace std;


int main() {
	int k; 
	scanf("%d", &k);
	int* array = new int[k];
	for (int i = 0; i < k; i++) {
		scanf("%d", &array[i]);
	}
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < k-i-1; j++) {
			if (array[j] > array[j + 1])
				swap(array[j], array[j + 1]);
		}
	}
	for (int i = 0; i < k; i++) {
		printf("%d\n", array[i]);
	}
}