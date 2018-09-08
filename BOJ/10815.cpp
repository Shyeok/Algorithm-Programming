#include <stdio.h>
#include <iostream>
#include <set>
using namespace std;
// using set continaer
// g++ -std=c++14
int main(){
	int n, m;
	set<int> s;
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		scanf("%d",&m);
		s.insert(m);
	}
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		scanf("%d",&m);
		auto it = s.find(m);
		if(it == s.end()){
			printf("0 ");
		}
		else{
			printf("1 ");
		}
	}
	return 0;
}
