#include<stdio.h>
#pragma warning (disable:4996)
int main() {
	int m[8] = { 0, };
	for (int i = 0; i < 8; i++) {
		scanf("%d", &m[i]);
	}
	if (m[0] == 8) {
		for (int i = 0; i < 7; i++) {
			if (m[i] != m[i + 1] + 1)
				break;
			if (i == 6) {
				printf("descending\n");
				return 0;
			}
		}
	}
	if (m[0] == 1) {
		for (int i = 0; i < 7; i++) {
			if (m[i] != m[i + 1] - 1)
				break;
			if (i == 6) {
				printf("ascending\n");
				return 0;
			}
		}
	}
	printf("mixed\n");
	return 0;
}