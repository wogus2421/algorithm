#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int num=0;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		
			for (int k = 0; k < num - 1 - i; k++) {
				printf(" ");
			}
			for (int k = 0; k < 2 * i + 1; k++) {
				printf("*");
			}
			printf("\n");
			
		
	}
	return 0;
}