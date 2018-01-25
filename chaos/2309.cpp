#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<math.h>
#include<limits.h>
using namespace std;
#pragma warning(disable:4996)
vector<int> bab(9);
int sum=0;
int a, b, c;
int main() {
	for (int i = 0; i < 9; i++) {
		scanf("%d", &bab[i]);
		sum += bab[i];
	}
		
	sort(bab.begin(), bab.end());
	for (int i = 0; i < 9; i++) {
		if (sum - bab[i] < 100)
			continue;
		for (int j = i+1;j < 9; j++) {		
			
			
			if (sum - bab[i] - bab[j]==100) {
				a = i; b = j;
				for (int x = 0; x < 9; x++) {
					if (x == a || x == b)
						continue;
					printf("%d\n", bab[x]);
				}
				return 0;
			}
		}
	}

	return 0;
}