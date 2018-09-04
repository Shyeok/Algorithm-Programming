#include <stdio.h>
#include <string.h>
#include <iostream>
#include <deque>
using namespace std;
// deque stl
// g++ 10866.cpp
int main()
{
	int n;
	deque<int> dq;

	scanf("%d",&n);

	while(n){
		n = n - 1;
		char str[100];
		int m;
		scanf("%s",str);
		if(strcmp(str,"push_front") == 0){
			scanf("%d",&m);
			dq.push_front(m);
		}
		else if(strcmp(str,"push_back") == 0){
			scanf("%d",&m);
			dq.push_back(m);
		}
		else if(strcmp(str,"pop_front") == 0){
			if(dq.empty()){
				printf("-1\n");
			}
			else{
				m = dq.front();
				printf("%d\n",m);
				dq.pop_front();
			}
		}
		else if(strcmp(str,"pop_back") == 0){
			if(dq.empty()){
				printf("-1\n");
			}
			else{
				m = dq.back();
				printf("%d\n",m);
				dq.pop_back();
			}
		}
		else if(strcmp(str,"size") == 0){
			m = dq.size();
			printf("%d\n",m);
		}
		else if(strcmp(str,"empty") == 0){
			m = dq.empty();
			printf("%d\n",m);
		}
		else if(strcmp(str,"front") == 0){
			if(dq.empty()){
				printf("-1\n");
			}
			else{
				m = dq.front();
				printf("%d\n",m);
			}
		}
		else if(strcmp(str,"back") == 0){
			if(dq.empty()){
				printf("-1\n");
			}
			else{
				m = dq.back();
				printf("%d\n",m);
			}
		}
		else{
			printf("Wrong command\n");
		}
	}
	return 0;
}
