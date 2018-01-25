#include<iostream>
#include<algorithm>
#include<vector>
#pragma warning(disable:4996)
using namespace std;
typedef struct abc {
	int start;
	int end;
	int time;
}abc;

bool cmp1(abc a, abc b) {
	if (a.end == b.end) {
		return a.start < b.start;
	}
	return a.end < b.end; }

int main() {
	int k;
	int count = 0;
	int check = 0;
	int check2 = 0;
	scanf("%d", &k);
	vector<abc> list;
	vector<abc> list2;
	abc arr;
	for (int i = 0; i < k; i++) {
		scanf("%d %d", &arr.start,&arr.end);
		arr.time = arr.end - arr.start;
		list2.push_back(arr);
	}
	sort(list2.begin(), list2.end() , cmp1);
	for (int i = 0; i < k; i++) {
		if (list2[i].time == 0) {
			list.push_back(list2[i]);
			count++;
			continue;
		}
		for (int j = 0; j < count; j++) {
			check = -1;
			if (list2[i].start<list[j].end) {
				break;
			}
			else if (list2[i].start == list[j].start && list2[i].end == list[j].end)
				break;
			check = 0;
		}
		if (check == -1)
			continue;
		list.push_back(list2[i]);
		count++;
	}
	printf("%d\n", count);
	for (int i = 0; i < count; i++) {
		printf("(%d %d)\n", list[i].start, list[i].end);
	}
	return 0;
}
