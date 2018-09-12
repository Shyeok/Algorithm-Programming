#include <stdio.h>
#include <iostream>
#include <queue>

using namespace std;

int main(){
	int n;
	priority_queue<int> q;
	cin >> n;
	while(n--){
		int m;
		cin >> m;
		if(m == 0){
			if(q.empty())printf("0\n");
			else{
				m = q.top();
				m = -m;
				q.pop();
				printf("%d\n",m);
			}
		}
		else{		
			m = -m;
			q.push(m);
		}
	}
	return 0;
}
