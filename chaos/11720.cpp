#include<iostream>
#pragma warning(disable:4996)
using namespace std;

int main() {
	int n,result=0,k;
	cin >> n;
	for (int i = 0; i < n; i++) {
		scanf("%1d", &k);
		result += k;
	}
	printf("%d", result);
	return 0;
}