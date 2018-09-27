#include <stdio.h>
#include <iostream>
#define MAX_path 200000
#define MAX_city 20
#define MAX_num 20000000
using namespace std;

int dy[MAX_path][MAX_city];
int path_cost[MAX_city][MAX_city];
int min(int a, int b);

int main(){
	int n;
	cin>>n;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin>>path_cost[i][j];
		}
	}
	for(int i = 0; i < 1 << n; i++){
		for(int j = 0; j < n; j++){
			dy[i][j] = MAX_num;
		}
	}
	dy[1][0] = 0;
	for(int i = 1; i < (1 << n); i++){
		for(int j = 1; j < n; j++){
			if(i & (1 << j)){
				for(int k = 0; k < n; k++){
					if(path_cost[k][j] && i & (1 << k) && k != j){
						dy[i][j] = min(dy[i][j],dy[i - (1 << j)][k] + path_cost[k][j]);
					}
				}
			}
		}
	}

	int m = MAX_num;
	for(int i = 1; i < n; i++){
		if(path_cost[i][0]){		
			m = min(m, dy[(1 << n)-1][i] + path_cost[i][0]);
		}
	}
	printf("%d\n",m);
	return 0;
}
int min(int a, int b){
	if(a > b)return b;
	return a;
}
