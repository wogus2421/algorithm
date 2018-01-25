#include<iostream>
#include<vector>
#include<queue>
#include<functional>
#include<algorithm>
#pragma warning(disable:4996)
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int num, m,page;
		int cnt=0;
		scanf("%d %d", &num, &m);
		vector<int> k;
		pair<int, int> x;
		queue<pair<int,int>> printer;
		
		for (int i = 0; i < num; i++) {
			scanf("%d", &page);
			k.push_back(page);
			x.first = page;
			if (i == m) {
				x.second = 1;
			}
			else
				x.second = 0;
			printer.push(x);
		}

		sort(k.begin(), k.end());
		while (!printer.empty()) {
			if (printer.front().first == k.back()) {
				cnt++;
				if (printer.front().second == 1)
					break;
				printer.pop();
				k.pop_back();
			}
			else {
				x = printer.front();
				printer.pop();
				printer.push(x);
			}
		}
		printf("%d\n", cnt);
	}
	return 0;
}