#include<stdio.h>
char dairy[101];
int main()
{
	char help;
	int i, ok, cnt;
	cnt = ok = 0;
	for(;;)
	{
		scanf("%c",&help);
		if(help == 10)break;
		if(ok == 0)
		{
			if(help == 'a' || help == 'e' || help == 'i' || help == 'o' || help == 'u')ok = 1;
			cnt = cnt + 1;
			dairy[cnt] = help;
		}
		else if(ok == 1)
		{
			if(help == 'a' || help == 'e' || help == 'i' || help == 'o' || help == 'u')ok = 0;
		}
	}
	for(i=1;i<=cnt;i++)
	{
		printf("%c",dairy[i]);
	}
	return 0;
}