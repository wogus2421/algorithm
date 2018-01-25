#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	char word[110];
	scanf("%s", word);
	int count = 0;
	for (int i = 0; i < 110; i++) {
		if (word[i] == '\0')
			break;
		count++;
		if (i>1 && word[i] == '='&&word[i - 1] == 'z'&&word[i - 2] == 'd') {
			count--;
			count--;
		}
		else if (word[i] == '='&&(word[i - 1] == 'c' || word[i - 1] == 's' || word[i - 1] == 'z')) {
			count--;
		}
		else if (word[i] == '-' && (word[i - 1] == 'c' || word[i - 1] == 'd')) {
			count--;
		}
		else if (i != 0 && word[i] == 'j' && (word[i - 1] == 'l' || word[i - 1] == 'n')) {
			count--;
		}
	}
	printf("%d", count);
}