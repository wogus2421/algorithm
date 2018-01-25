#include<stdio.h>
#pragma warning (disable:4996)
int main() {
	char pro[80];
	int score = 0;
	int k;
	scanf("%d", &k);
	for (int j = 0; j < k; j++) {
		scanf("%s", pro);

		for (int i = 0; i < 80; i++) {
			if (pro[i] != 'O' && pro[i] != 'X')
				break;
			if (pro[i] == 'O') {
				score++;
				int j = i-1;
				for (j;j>-1;) {
					if (pro[j] != 'O')
						break;
					score++;
					j--;
				}
			}
		}
		printf("%d\n", score);
		score = 0;
	}				
}