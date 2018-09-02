#include<stdio.h>
#include<string.h>
int n, a[1000];
int check[30];
char s[200];
int main()
{
	int i, j, len;
	int ok, cnt;
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		getchar();
		scanf("%s",s + 1);
		len = strlen(s + 1);
		a[i] = 0;
		for(j = 1; j <= len; j++)
		{
			if(s[j - 1] != s[j])
			{
				if(check[s[j] - 'a'] != 0){a[i] = 1; break;}
			}
			check[s[j] - 'a'] = 1;
		}
		for(j = 'a' - 'a'; j <= 'z' - 'a'; j++)check[j] = 0;
		for(j = 1; j <= len; j++)s[j] = 0;
	}
	cnt = 0;
	for(i = 0; i < n; i++)
	{
		if(a[i] == 0)cnt = cnt + 1;
	}
	printf("%d\n",cnt);
	return 0;
}