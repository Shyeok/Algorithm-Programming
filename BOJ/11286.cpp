#include <stdio.h>
#include <iostream>
#include <queue>

using namespace std;

int main(){
	int n, m;
	priority_queue<int> p_pq;
	priority_queue<int> n_pq;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&m);
		if(m == 0){
			if(p_pq.empty() && n_pq.empty()){
				printf("0\n");
			}
			else
			{
				if(n_pq.empty()){
					m = p_pq.top();
					m = -m;
					p_pq.pop();
				}
				else if(p_pq.empty()){
					m = n_pq.top();
					n_pq.pop();
				}
				else{
					if(p_pq.top() <= n_pq.top()){
						m = n_pq.top();
						n_pq.pop();
					}
					else{
						m = p_pq.top();
						m = -m;
						p_pq.pop();
					}
				}
				printf("%d\n",m);
			}
		}
		else{
			if(m > 0)p_pq.push(-m);
			else{
				n_pq.push(m);
			}
		}
	}
	return 0;
}
