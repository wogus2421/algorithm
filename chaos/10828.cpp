#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#pragma warning(disable:4996)
using namespace std;
int main() {
	int n;
	scanf("%d", &n);
	string inst;
	char instt[10];
	int o;
	vector<int> k;
	for (int i = 0; i < n; i++) {
		scanf("%s",&instt);
		inst = instt;
		if (inst.compare("push")==0) {
			scanf("%d\n", &o);
			k.push_back(o);
		}
		if (inst.compare("pop")==0) {
			if (!k.empty()) {
				printf("%d\n", k.back());
				k.pop_back();
			}
			else
				printf("-1\n");
		}
		if (inst.compare("size")==0)
			printf("%d\n", k.size());
		if (inst.compare("empty") == 0) {
			if (k.empty())
				printf("1\n");
			else
				printf("0\n");
		}
		if (inst.compare("top") == 0) {
			if (k.empty())
				printf("-1\n");
			else
				printf("%d\n", k.back());
		}
				
	}
	return 0;
}