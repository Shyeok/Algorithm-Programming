#include<stdio.h>
int n;
int main()
{
	int cnt, help;
	int ok;
	ok = cnt = 0;
	help = 1;
	scanf("%d",&n);
	while(ok == 0)
	{
		if(n <= help){ok = 1;}
		cnt = cnt + 1;
		help = help + (cnt*6);
	}
	printf("%d",cnt);
	return 0;
}