#include <stdio.h>
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
// g++ -std=c++14
int main()
{
	list<pair<int,int>> l;
	list<pair<int,int>>::iterator iter;
	int n, m;
	int num;
	scanf("%d",&n);
	
	for(int i = 0; i < n; i++){
		scanf("%d",&m);
		l.push_back({i+1,m});
	}

	auto it2 = l.begin();

	while(1){

		cout<<it2->first<<" ";
		num = it2->second;

		it2 = l.erase(it2);
		if(l.empty()) break;

		if (it2 != l.end()) {
			if (num > 0)num--;
		}
		// list.end() is behind of last element
		if (it2 == l.end()) {
			--it2;
			if (num < 0)num++;
		}

		if (num > 0) {
			for (int i = 0; i < num; i++) {
				++it2;
				if (it2 == l.end())it2 = l.begin();
			}
		}
		else if (num < 0) {
			num = -num;
			for (int i = 0; i < num; i++) {
				if (it2 == l.begin()) {
					it2 = l.end();
					--it2;
				}
				else --it2;
			}
		}
	}
	return 0;
} 
