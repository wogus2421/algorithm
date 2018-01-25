#include<iostream>
using namespace std;
int main() {
	int num = 0;
	cin>>num;
	for (int i = 0; i < num; i++) {

		for (int k = 0; k < num - 1 - i; k++) {
			cout<<" ";
		}
		for (int k = 0; k < 2 * i + 1; k++) {
			cout<<"*";
		}
		cout<<endl;


	}
	return 0;
}