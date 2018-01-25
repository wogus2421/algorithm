#include<iostream>
using namespace std;

int main() {
	
	int array[10] = { 4,2,7,9,5,1,6,3,0,8 };
	int k = array[0];
	int temp = 0;
	for (int i = 0; i < 10; i++) {
		k = array[i];
		for (int j = i+1; j < 10; j++) {
					
			if (k > array[j]) {
				temp = j;
				k = array[j];
				continue;
			}	
		}		
		if (k != array[i]) {
			swap(array[i], array[temp]);
		}
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", array[i]);
	}
	return 0;
}