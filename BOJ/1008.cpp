#include <stdio.h>
#include <iostream>
#include <queue>
using namespace std;

int main(){

	queue<int> q;
	int n, m;

	cin>>n>>m;

	if(n >= m){
		printf("%d",n/m);
		n = n % m;
		if(n != 0)printf(".");
	}
	else{
		printf("0.");
	}
	for(int i = 0; i < 25; i++){
		if(n == 0)break;
		n = n * 10;
		q.push(n/m);
		n = n % m;
	}
	while(!q.empty()){
		cout<<q.front();
		q.pop();
	}
	return 0;
}
