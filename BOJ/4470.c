#include<stdio.h>
char name[10000][51];
int len[10000], n;
int main()
{
	int i, j, cnt;
	char who;
	cnt = 0;
	scanf("%d",&n);
	for(;;)
	{
		scanf("%c",&who);
		if(who == 10)cnt++;
		else
		{
			len[cnt]++;
			name[cnt][len[cnt]] = who;
		 }
		 if(cnt == n + 1)break;
	 }
	 for(i=1;i<=n;i++)
	 {
		 printf("%d. ",i);
		 for(j=1;j<=len[i];j++)
		 {
			 printf("%c",name[i][j]);
		 }
		 printf("\n");
	 }
	return 0;
}