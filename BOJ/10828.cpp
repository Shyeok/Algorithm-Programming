#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stack>
using namespace std;
int main(){
	int n, m;
	char str[100];
	stack<int> s;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> str;
		if(strcmp(str,"push") == 0){
			cin >> m;
			s.push(m);
		}
		else if(strcmp(str,"pop") == 0){
			if(s.empty())cout<<"-1\n";
			else{
				cout<<s.top()<<"\n";
				s.pop();
			}
		}
		else if(strcmp(str,"size") == 0){
			cout<<s.size()<<"\n";
		}
		else if(strcmp(str,"empty") == 0){
			cout<<s.empty()<<"\n";
		}
		else if(strcmp(str,"top") == 0){
			if(s.empty())cout<<"-1\n";
			else{
				cout<<s.top()<<"\n";
			}
		}
	}
	return 0;
}
