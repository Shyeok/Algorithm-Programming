#include<stdio.h>
#include<string.h>
int main()
{
	double n, m;
	int i;
	char str1[20000], str2[20000];
	scanf("%s",str1);
	scanf("%s",str2);
	n = 0;
	for(i = 0; i < strlen(str1); i++)	
	{
		n = n + (int)(str1[i] - '0');
	}
	m = 0;
	for(i = 0; i < strlen(str2); i++)
	{

		m = m + (int)(str2[i] - '0');
	}
	printf("%.lf\n",n*m);
	return 0;
}