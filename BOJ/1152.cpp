#include<stdio.h>
#include<string.h>
char S[1000001];
int main()
{
	int i, len, dap = 0;
	gets(S);
	len = strlen(S);
	for(i=0;i<len;i++)
	{
		if(S[i] != ' ' && S[i+1] == ' ')dap = dap + 1;
	}
	if(S[len - 1] != ' ')dap = dap + 1;
	printf("%d",dap);
	return 0;
}