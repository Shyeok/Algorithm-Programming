#include <stdio.h>
#include <string.h>

int main(){
	int n;
	scanf("%d",&n);
	if(n % 15 == 0)printf("FIZZBUZZ\n");
	else{
		if(n % 3 == 0)printf("FIZZ\n");
		else if(n % 5 == 0)printf("BUZZ\n");
	}
	return 0;
}
