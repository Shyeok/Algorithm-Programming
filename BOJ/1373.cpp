#include<stdio.h>
#include<string.h>
char Numbers[2000000];
int dap[2000000];
int main()
{
	int i, len, daplen;
	scanf("%s",&Numbers);
	len = strlen(Numbers);
	daplen = 0;
	if(len % 3 == 0)
	{
		for(i = len - 1; i >= 0; i = i - 3)
		{
			daplen = daplen + 1;
			dap[daplen] = (Numbers[i] - '0') + (Numbers[i-1] - '0')*2 + (Numbers[i-2] - '0')*4;
		}
	}
	if(len % 3 == 1)
	{
		for(i = len - 1; i >= 1; i = i - 3)
		{
			daplen = daplen + 1;
			dap[daplen] = (Numbers[i] - '0') + (Numbers[i-1] - '0')*2 + (Numbers[i-2] - '0')*4;
		}
		daplen = daplen + 1;
		dap[daplen] = Numbers[0] - '0';
	}
	if(len % 3 == 2)
	{
		for(i = len - 1; i >= 2; i = i - 3)
		{
			daplen = daplen + 1;
			dap[daplen] = (Numbers[i] - '0') + (Numbers[i-1] - '0')*2 + (Numbers[i-2] - '0')*4;
		}
		daplen = daplen + 1;
		dap[daplen] = (Numbers[0] - '0') * 2 + (Numbers[1] - '0');
	}

	for(i=daplen;i>=1;i--)
	{
		printf("%d",dap[i]);
	}
	return 0;
}