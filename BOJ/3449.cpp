#include<stdio.h>
#include<string.h>
int cnt[20000];
char s_1[200], s_2[200], clean;
int main()
{
	int i, j, len;
	int testcase;
	scanf("%d",&testcase);
	getchar();
	for(i = 0; i < testcase; i++)
	{
		gets(s_1);
		gets(s_2);
		len = strlen(s_1);
		for(j = 0; j < len; j++)
		{
			if(s_1[j] != s_2[j])cnt[i] = cnt[i] + 1;
			s_1[j] = clean; s_2[j] = clean;
		}
	}
	for(i = 0; i < testcase; i++)
	{
		printf("Hamming distance is %d.\n",cnt[i]);
	}
	return 0;
}