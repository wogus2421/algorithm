#include<stdio.h>
#pragma warning (disable:4996)
int main() {
	char st[1000005];
	int count = 0;
	scanf("%[^\n]s", st);
	if (st[0] > 'A' && st[0] < 'z')
		count++;
	for (int i = 0; i < sizeof(st); i++) {						
		if (st[i - 1] == ' '&&st[i] == '\0')
			break;	
		if (st[i - 1] == ' '&&st[i] != ' ')
			count++;
		if (st[i] == '\0') {
			break;
		}		
	}	
	printf("%d", count);
	return 0;
}