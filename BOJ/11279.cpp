#include <stdio.h>
#include <iostream>
#include <queue>

using namespace std;

int main(){
	int n;
	priority_queue<int> pq;
	scanf("%d",&n);
	while(n--){
		int m;
		scanf("%d",&m);
		if(m == 0){
			if(pq.empty())printf("0\n");
			else{
				m = pq.top();
				printf("%d\n",m);
				pq.pop();
			}
		}
		else{
			pq.push(m);
		}
	}
	return 0;
}
