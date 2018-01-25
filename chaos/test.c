#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>
int top = -1;
int head = 0;
int Q[100000];
int main() {
	//while(scanf(" %[^\n]s",a)!=EOF)
	//char* a = (char*)malloc(sizeof(char) * 10);
	
	/*
	void push(int x);
	void pop(void);
	void size(void);
	int empty(void);
	void front(void);
	void back(void);

	int order = 0;
	int k;
	char str[10];
	char str2[1000000];
	scanf("%d", &order);
	for (int i = 0; i < order; i++) {
		scanf("%s", &str);
		if (!strncmp(str, "pop",3)) {
			pop();
			continue;
		}
		if (!strncmp(str, "size",4)) {
			size();
			continue;
		}
		if (!strncmp(str, "empty",5)) {
			printf("%d\n",empty());
			continue;
		}
		if (!strncmp(str, "front",5)) {
			front();
			continue;
		}
		if (!strncmp(str, "back",4)) {
			back();
			continue;
		}
		if (!strncmp(str, "push", 4)) {
			scanf("%s", &str2);
			k = atoi(str2);
			push(k);
			continue;
		}
	}

}

void push(int x) {
	top++;
	Q[top] = x;

}

void pop(void) {
	if (empty() == 0) {
		printf("%d\n", Q[head]);
		head++;
	}
	else if (empty() == 1) {
		printf("-1\n");
	}
	
}
void size(void) {
	if (empty() == 0) {
		printf("%d\n", top-head+1);
	}
	else if(empty() == 1)
		printf("0\n");
	
}
int empty(void) {
	if ((top - head) == -1) {		
		return 1;
	}
	else {		
		return 0;
	}
}	
void front(void) {
	if (empty() == 0) {
		printf("%d\n", Q[head]);
		
	}
	else if (empty() == 1) {
		printf("%d\n", -1);
	}
}
void back(void) {
	if (empty() == 0) {
		printf("%d\n", Q[top]);
		
	}
	else if (empty() == 1) {
		printf("%d\n", -1);
	}
	*/

	
	int x[2][3] = { {1,2,3},{4,5,6} };
printf("%d", *(*(x + 1)+2));
int result = 0;
int a[5] = { 0, };
for (int i = 0; i < 5; i++) {
	scanf("%d", a[i]);
}
for (int i = 0; i < 5; i++) {
	if (a[i] < 40) {
		a[i] = 40;
	}
	result = result + a[i];
}
printf("%d", result / 5)

}