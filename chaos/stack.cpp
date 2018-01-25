#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
	int i;
	cin >> i;
	int num;
	int k=1;
	vector<int> stack;
	string output= "";
	stack.push_back(0);
	for (int j = 0; j <  i;  j++) {
		cin >> num;
		if (num > stack[stack.size() - 1]){
			for (k ; k <= num; k++) {
				stack.push_back(k);			
				output += "+\n";
			}		
		}
		if (num == stack[stack.size() - 1]) {
			stack.pop_back();		
			output += "-\n";
		}
		if (num < stack[stack.size() - 1]) {
			for (int m = k; m > num; m--) {
				if (num < stack[stack.size() - 1]) {
					printf("NO\n");
					return 0;
				}
				stack.pop_back();
				output += "-\n";
			}
		}
	}
	cout << output << endl;
	return 0;
}