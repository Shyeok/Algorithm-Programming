#include<stdio.h>
#include<string.h>
typedef struct
{
	char str[51];
}S;
int main()
{
	int i, j, k;
	int len, flag;
	char string[51];
	char a[51], b[51];
	S table[2][51];
	gets(string);
	len = strlen(string);
	for(i = 0; i < len - 2; i++)
	{
		for(j = 0; j <= i; j++)
		{
			table[0][i].str[j] = string[i - j];
		}
		for(j = i + 1; j < len; j++)
		{
			table[0][i].str[j] = string[j];
		}
	}
	for(i = 1; i < len - 1; i++)
	{
		for(j = 0; j < len; j++)b[j] = 'z';
		b[len] = 0;
		for(j = 0; j < i; j++)
		{
			for(k = 0; k <= j; k++)
			{
				a[k] = table[0][j].str[k];
			}
			for(k = j + 1; k <= i; k++)
			{
				a[k] = table[0][j].str[i - k + j + 1];
			}
			for(k = i + 1; k < len; k++)
			{
				a[k] = table[0][j].str[len - k + i];
			}
			a[len] = 0;
			flag = strcmp(a,b);
			if(flag < 0)strcpy(b,a);
		}
		strcpy(table[1][i].str,b);
	}
	strcpy(b,table[1][1].str);
	for(i = 1; i < len - 1; i++)
	{
		flag = strcmp(b,table[1][i].str);
		if(flag > 0)strcpy(b,table[1][i].str);
	}
	for(i = 0; i < len; i++)
	{
		printf("%c",b[i]);
	}
	printf("\n");
	return 0;
}