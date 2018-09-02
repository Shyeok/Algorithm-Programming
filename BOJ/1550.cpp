#include<stdio.h>
#include<string.h>
char s[10];
int main()
{
	int i, len, change;
	double dap, help = 1;
	dap = 0;
	scanf("%s",&s);
	len = strlen(s);
	for(i=len-1;i>=0;i--)
	{
		if( s[i] >= '0' && s[i] <= '9')
		{
			change = s[i] - '0';
		}
		else if(s[i] >= 'A' && s[i] <= 'F')
		{
			change = s[i] - 'A' + 10;
		}
		dap = dap + change * help;
		help = help * 16;
	}
	printf("%.lf",dap);
	return 0; 
}