#include <iostream>
#include <vector>
#include <algorithm>
#pragma warning(disable:4996)
using namespace std;

typedef struct tmc {
	int s;
	int e;
}tmc;

bool compare(const tmc &a, const tmc &b) {
	if (a.e == b.e) {
		return a.s < b.s;
	}
	return a.e < b.e;
};

int main() {
	int N;
	int c = 0; //가능한 회의의 개수 카운트
	int temp = -1;
	scanf("%d", &N);
	int s, e;
	vector<tmc> v;
	tmc t;
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &s, &e);
		t.s = s;
		t.e = e;
		v.push_back(t);
	}
	sort(v.begin(), v.end(), compare); //같으면 시작이 빠른 순으로
	for (int i = 0; i < N; i++) {
		if (v[i].s >= temp) {
			temp = v[i].e;
			c++;
		}
	}
	printf("%d\n", c);
	return 0;
}

