#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<math.h>
#include<limits.h>
using namespace std;
#pragma warning(disable:4996)


int main() {
	int n;
	cin >> n;
	int mw = 0;
	vector<int> k;
	for (int i = 0; i < n; i++) {
		scanf("%d", &mw);
		k.push_back(mw);
	}
	sort(k.begin(), k.end());
	mw = 0;
	for (int i = 0; i < n; i++) {
		mw = max(mw, k[i] * (n - i));
	}
	printf("%d", mw);


}