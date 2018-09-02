#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int i, n;
	char *str;
	char c;
	str = (char *)calloc(1,sizeof(char));
	n = 1;
	for(;;)
	{
		scanf("%c",&c);
		if(c == '\n')break;
		n = n + 1;
		str = (char *)realloc(str,sizeof(char) * n);
		str[n - 1] = c;
	}
	for(i = 0; i < n; i++)
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			printf("%c",str[i]);
		}
	}
	printf("\n");
	return 0;
}