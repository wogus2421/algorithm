#include<stdio.h>
#pragma warning (disable:4996)

int main() {
	int alpha[26] = { 0, };
	char word[101];
	for(int i = 0; i < 26; i++) {
		alpha[i] = -1;
		}
	scanf("%s", word);
	for (int i = 0; i < 100; i++) {
		if (word[i] == '\0')
			break;
		if (alpha[word[i] - 'a'] != -1)
			continue;
		alpha[word[i] - 'a'] = i;
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", alpha[i]);
	}
	return 0;
}