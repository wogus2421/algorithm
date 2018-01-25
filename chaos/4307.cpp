#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<math.h>
#include<limits.h>
using namespace std;
#pragma warning(disable:4996)
int arr[1000010];

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int stick, num;
		int state;
		int mx, mn;
		int indx=0,mid=0;
		
		scanf("%d %d", &stick, &num);
		vector<int> ant;
		
		if (num == 0||stick==0) {
			printf("0 0\n");
				continue;
			}
			for (int j = 0; j < num; j++) {
				scanf("%d", &state);
				ant.push_back(state);
			}
			sort(ant.begin(), ant.end());
			auto low = lower_bound(ant.begin(), ant.end(), stick / 2);
			if (low == ant.end())
				mid = ant.back();
			else {
				indx = low - ant.begin();
				if (indx != 0) {
					if (ant[indx] - stick / 2 > stick / 2 - ant[indx - 1])
						mid = ant[indx - 1];
					else
						mid = ant[indx];
				}
				else {
					mid = ant[indx];
				}
			}
			mx = max(stick - ant[0], ant.back());
			mn = min(stick-mid,mid);
			printf("%d %d\n", mn, mx);
		}
		return 0;
	}