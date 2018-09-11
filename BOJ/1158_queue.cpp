#include <stdio.h>
#include <iostream>
#include <queue>
using namespace std;

//using queue container
//g++ -std=c++14
int main(){
	int n, m;
	queue <int> q;
	cin >> n>> m;
	for(int i = 0; i < n; i++){
		q.push(i + 1);
	}
	cout<<"<";
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m - 1; j++){
			auto it = q.front();
			q.pop();
			q.push(it);
		}
		cout<<q.front();
		q.pop();
		if(i != n - 1)printf(", ");
	}
	printf(">");
	return 0;
}
