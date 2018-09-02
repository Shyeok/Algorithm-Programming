#include<stdio.h>
#include<string.h>
int main()
{
	int i, j;
	int n, m, len;
	int a, b, help;
	char str[1000];
	scanf("%d",&n);
	getchar();
	for(i = 0; i < n; i++)
	{
		fgets(str,sizeof(str),stdin);
		len = strlen(str);
		len = len - 1;
		help = 0;
		for(j = 0; j < len; j++)
		{
			if(str[j] == '+')
			{
				help = j;
				break;
			}
		}
		if(help == 0)
		{
			printf("skipped\n");
		}
		else
		{
			a = 0; b = 0;
			m = 1;
			for(j = 0; j < help - 1; j++)m = m * 10;
			for(j = 0; j < help; j++)
			{
				a = a + (int)(str[j] - '0') * m;
				m = m / 10;
			}
			m = 1;
			for(j = help + 1; j < len - 1; j++)m = m * 10;
			for(j = help + 1; j < len; j++)
			{
				b = b + (int)(str[j] - '0') * m;
				m = m / 10;
			}
			printf("%d\n",a + b);
		}
		for(j = 0; j < len; j++)str[j] = 0;
	}
	return 0;
}