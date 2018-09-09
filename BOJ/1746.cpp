#include <stdio.h>
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <set>

using namespace std;
int main(){
	int n, m;
	int dap = 0;
	string name;
	map<string, int> name_check;
	set<string> name_list;
	//vector<string> name_list;
	cin>>n>>m;
	for(int i = 0; i < n; i++){
		cin >> name;
		name_check[name] = 1;
	}
	for(int i = 0; i < m; i++){
		cin >> name;
		++name_check[name];
	}
	for(auto it = name_check.begin(); it != name_check.end(); ++it){
		if(it->second == 2){
			dap += 1;
		}
	}
	cout<<dap<<"\n";	
	for(auto it = name_check.begin(); it != name_check.end(); ++it){
		if(it->second == 2){
			cout<<it->first<<"\n";
		}
	}
	
/*	cout<<name_list.size()<<"\n";
	for(auto it = name_list.begin(); it != name_list.end(); ++it){
		cout<<*it<<"\n";
	}*/
	return 0;
}
