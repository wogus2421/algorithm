#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<math.h>
#include<limits.h>
using namespace std;
#pragma warning(disable:4996)
long long result = 0;
int flag = 0;
int n,r,c;
void Zfunc(long long n, int r, int c);
int main() {
	scanf("%d %d %d", &n, &r, &c);
	int N = 1;
	N = N << n;
	Zfunc(N, r, c);

	printf("%lld", result);

	return 0;
}

void Zfunc(long long n, int r, int c) {
	if (r >= n / 2)
		flag += 2;
	if (c >= n / 2)
		flag += 1;
	if (n > 2) {
		switch (flag){
		case 0:
			flag = 0;
			Zfunc(n / 2, r, c);
			break;
		case 1:
			flag = 0;
			result += n*n / 4;
			Zfunc(n / 2, r, c - n / 2);
			break;
		case 2:
			flag = 0;
			result += n*n / 2;
			Zfunc(n / 2, r - n / 2, c);
			break;
		case 3:
			flag = 0;
			result += n*n * 3 / 4;
			Zfunc(n / 2, r - n / 2, c - n / 2);
			break;
		default:
			break;
		}
	}
	else {
		result += flag;
	}
	return;
}