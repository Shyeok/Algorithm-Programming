#include <iostream>
#include <stdio.h>
#include <map>
#include <string.h>
#include <string>
#define _DEBUG

using namespace std;

int main() {

#ifdef _DEBUG

	int n, m;
	int len;
	char str[25];
	map<string, int > p_0;
	map<int, string> p_1;

	scanf("%d%d", &n, &m);

	for(int i = 0; i < n; i++) {
		scanf("%s", str);
		len = strlen(str);
		str[len] = 0;
		p_0[str] = i + 1;
		p_1[i + 1] = str;
		str[0] = 0;
	}

	for(int i = 0; i < m; i++) {
		scanf("%s", str);
		len = strlen(str);
		str[len] = 0;
		if(str[0] >= '0' && str[0] <= '9') {
			n = atoi(str);
			cout << p_1.find(n)->second <<'\n';
		}
		else {
			printf("%d\n", p_0.find(str)->second);
		}
		str[0] = 0;
	}
#endif

	return 0;
}