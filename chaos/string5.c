#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int num;
	scanf("%d", &num);
	char word[110];
	int count = 0;
	for (int i=0; i < num; i++) {
		scanf("%s", word);
		int alpha[26] = { 0, };
		for (int j = 0; j < 110; j++) {
			if (word[j] >= 'a'&&word[j] <= 'z') {
				if (alpha[word[j] - 'a'] == 0) {
					alpha[word[j] - 'a']++;
				}
				else if (word[j] != word[j - 1]) {
					break;
				}
			}
			if (word[j] == '\0') {
				count++;
				break;
			}				
		}
	}
	printf("%d\n", count);
}