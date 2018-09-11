#include <stdio.h>
#include <iostream>
#include <string.h>
#include <queue>
using namespace std;
// Using queue container
// g++ -std=c++14
int main(){
	int n, m;
	char str[100];
	queue <int> q;

	cin >> n;
	for(int i = 0; i < n; i++){
		cin>> str;
		if(strcmp(str,"push") == 0){
			cin>>m;
			q.push(m);
		}
		else if(strcmp(str,"pop") == 0){
			if(q.empty())printf("-1\n");
			else{
				printf("%d\n",q.front());
				q.pop();
			}
		}
		if(strcmp(str,"size") == 0){
			printf("%d\n",(int)q.size());
		}
		if(strcmp(str,"empty") == 0){
			printf("%d\n",q.empty());
		}
		if(strcmp(str,"front") == 0){
			if(q.empty())printf("-1\n");
			else{
				printf("%d\n",q.front());
			}
		}
		if(strcmp(str,"back") == 0){
			if(q.empty())printf("-1\n");
			else{
				printf("%d\n",q.back());
			}
		}
	}
	return 0;
}
