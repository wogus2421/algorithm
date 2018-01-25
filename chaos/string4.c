#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	char word[1000010];
	scanf("%s", word);
	int count[26] = { 0, };
	int c=0;
	int flag = 0;
	for (int i = 0; i < 1000010; i++) {
		if (word[i] == '\0')
			break;
		if (word[i] >= 'a'&&word[i] <= 'z') {
			count[word[i] - 'a']++;
		}
		if (word[i] >= 'A'&&word[i] <= 'Z') {
			count[word[i] - 'A']++;
		}
	}
	for (int i = 0; i < 25; i++) {
		if (count[c] == count[i+1]) {
			flag = 1;
		}
		if (count[c] < count[i + 1]) {
			flag = 0;
			c = i + 1;
		}	
	}
	if (flag == 1) {
		printf("?\n");
	}
	else if (flag == 0) {
		printf("%c\n", c + 'A');
	}	
	return 0;
}