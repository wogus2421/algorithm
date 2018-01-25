#include<stdio.h>
#pragma warning (disable:4996)
int main() {
	int num[10] = { 0, };
	int a, b, c, result;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	result = a*b*c;
	do {
		int k;
		k = result % 10;
		num[k]++;
		result = result / 10;
	} while (result / 10 != 0);
	num[result]++;
	for (int i = 0; i < 10; i++) {
		printf("%d\n",num[i]);
	}
}