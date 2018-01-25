#include<stdio.h>
#pragma warning(disable:4996)
int main() {
	int a, b;
	char c[3];
	char d[3];
	scanf("%s %s", c, d);
	a = (c[0]-'0') + (c[1]-'0') * 10 + (c[2]-'0') * 100;
	b = (d[0]-'0') + (d[1]-'0') * 10 +( d[2]-'0') * 100;
	if (a > b) {
		printf("%d\n", a);
	}
	else if (b > a) {
		printf("%d\n", b);
	}
	return 0;
}