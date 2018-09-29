#include <stdio.h>
#include <iostream>
#include <queue>
#define MAX 100000
#define MAX_E 20
using namespace std;

int dy[MAX];
int cost[MAX_E][MAX_E];

int min(int a, int b);
int cnt_e(int n);

int main(){

	int n, m;
	int s_state = 0;
	char state;
	queue<int> q;

	cin >> n;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin>>cost[n - i - 1][n - j - 1];
		}
	}

	for(int i = 0; i < n; i++){
		cin >> state;
		s_state *= 2;
		if(state == 'Y'){
			s_state += 1;
			q.push(n - i - 1);
		}
	}
	
	cin >> m;

	for(int i = 0; i < (1 << n); i++){
		dy[i] = MAX;
	}

	//printf("%d \n",s_state);

	dy[s_state] = 0;

	for(int i = 0; i < (1 << n); i++){
		for(int j = 0; j < MAX_E; j++){
			if(i & (1 << j)){
				for(int k = 0; k < MAX_E; k++){
					if(j != k && i & (1 << k)){
						//printf("%d %d %d\n",i, 1<<j, 1<<k);
						dy[i] = min(dy[i],dy[i-(1<<j)]+cost[k][j]);
					}
				}
			}
		}
	}

	int dap = MAX;

	for(int i = 0; i < (1 << n); i++){
		if(m <= cnt_e(i)){
			dap = min(dap,dy[i]); 
		}
	}

	/*for(int i = 0; i < 1<<n; i++){
		printf("i value is %d %d \n",i,dy[i]);
	}*/

	if(dap == MAX)dap = -1;
	printf("%d\n",dap);

	return 0;
}

int min(int a, int b){
	if(a < b)return a;
	return b;
}

int cnt_e(int n){
	int m = 0;
	while(n){
		if(n % 2 == 1)m += 1;
		n = n / 2;
	}
	return m;
}
