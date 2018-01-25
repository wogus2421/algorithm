#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	char code[16];
	int time = 0;
	scanf("%s", code);
	for (int i = 0; i < 16; i++) {
		if (code[i] == '\0')
			break;
		int k = code[i]-'A';
		switch (k)
		{
		case 0:		case 1:		case 2:
			time = time + 3;
			break;
		case 3:		case 4:		case 5:
			time = time + 4;
			break;
		case 6:		case 7:		case 8:
			time = time + 5;
			break;
		case 9:		case 10:	case 11:
			time = time + 6;
			break;
		case 12:	case 13:	case 14:
			time = time + 7;
			break;
		case 15:	case 16:	case 17:	case 18:
			time = time + 8;
			break;
		case 19:	case 20:	case 21:
			time = time + 9;
			break;
		case 22:	case 23:	case 24:	case 25:
			time = time + 10;
			break;
		

		default:
			break;
		}		
	}
	printf("%d", time);
}