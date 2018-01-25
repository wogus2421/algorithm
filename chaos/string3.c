#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int k;
	char word[21];
	scanf("%d", &k);

	for (int i = 0; i < k; i++) {
		int m;
		scanf("%d %s", &m, word);
		for (int j = 0; j < 21; j++) {
			if (word[j] == '\0')
				break;
			for (int z = 0; z < m; z++) {
				printf("%c", word[j]);
			}
		}
		printf("\n");
	}
	return 0;
}