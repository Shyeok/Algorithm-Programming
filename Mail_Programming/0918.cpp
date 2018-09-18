#include <stdio.h>
#include <iostream>

int main(){

	int n;
	int m[3] = {0,1,1};
	scanf("%d",&n);
	if(n < 0)printf("Wrong input\n");
	else{
		if(n <= 2)printf("%d\n",m[n]);
		else
		{
			n = n - 2;
			for(int i = 0; i < n; i++){
				m[0] = m[1];
				m[1] = m[2];
				m[2] = m[1] + m[0];
			}
			printf("%d\n",m[2]);
		}
	}
	return 0;
}
