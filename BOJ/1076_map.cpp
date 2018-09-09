#include<stdio.h>
#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
	map<string, int> color_value ={{"black", 0},{"brown",1},
	                               {"red", 2}, {"orange", 3},
								   {"yellow", 4}, {"green", 5},
								   {"blue", 6}, {"violet", 7},
								   {"grey", 8}, {"white", 9}};

	string s_0, s_1, s_2;
	cin>>s_0>>s_1>>s_2;

	long long int n;
	n = 1;
	n = color_value[s_0] * 10;
	n = n + color_value[s_1];
	int m = color_value[s_2];
	for(int i = 0; i < m; i++){
		n = n * 10;
	}
	cout<<n;
	return 0;
}
