#include <stdio.h>
#include <iostream>
#include <set>

using namespace std;

// g++ -std=c++14
// using set 
// set are contrainers that store unique elements following a specific order
int main()
{
	set<int> s;
	int n, m;
	//scanf("%d",&n);
	cin >> n;
	for(int i = 0; i < n; i++){
		scanf("%d",&m);
		s.insert(m);
	}

	for(auto it = s.begin(); it != s.end(); ++it){
		printf("%d ",*it);
	}
	return 0;
}
