#include<stdio.h>
#include<string.h>
char S[2000000];
int check[30];
int main()
{
	int i, len;
	int change, dap, max;
	scanf("%s",&S);
	len = strlen(S);
	for(i=0;i<len;i++)
	{
		if(S[i] >= 'a')
		{
			change = S[i] - 'a';
		}
		else
		{
			change = S[i] - 'A';
		}
		check[change] = check[change] + 1;
	}
	max = 0;
	for(i=0;i<='z' - 'a'; i++)
	{
		if(max < check[i])
		{
			max = check[i];
			dap = i;
		}
		else if(max == check[i])
		{
			dap = -1;
		}
	}
	if(dap == -1)
	{
		printf("?");
	}
	else
	{
		printf("%c",char(dap + 'A'));
	}
	return 0;
}