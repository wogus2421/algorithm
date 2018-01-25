#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<math.h>
#include<limits.h>
using namespace std;
#pragma warning(disable:4996)

int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	vector<int> dq(n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &dq[i]);
	}
	sort(dq.begin(), dq.end());

	int left = 1, right = dq.back() - dq[0];

	while (left <= right) {
		int mid = (left + right) / 2;
		int p = dq[0];
		int cnt = 1;
		for (int i = 1; i < n; i++) {
			if (dq[i] >= p + mid) {
				p = dq[i];
				cnt += 1;
			}
		}
		if (cnt >= k)
			left = mid + 1;
		else
			right = mid - 1;
	}
	printf("%d", right);
	return 0;
}