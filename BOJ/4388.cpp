#include<stdio.h>
#include<string.h> // 다 하고 하자 
char n[15], m[15];
int dap[100000], plus[15];
int main()
{
	int cnt = 0, len1, len2, len3;
	int i, N, M;
	for(;;)
	{
		len3 = 0;
		scanf("%s",n + 1);
		scanf("%s",m + 1);
		len1 = strlen(n + 1);
		len2 = strlen(m + 1);
		if(n[1] == '0' && m[1] == '0')break;
		cnt = cnt + 1;
		N = len1; M = len2;
		for(;;)
		{
			if(N == 0 && M == 0)break;
			else if(N == 0 && M != 0)
			{
				len3 = len3 + 1;
				plus[len3] = plus[len3] + (m[M] - '0');
								M = M - 1;
			}
			else if(N != 0 && M == 0)
			{
				len3 = len3 + 1;
				plus[len3] = plus[len3] + (n[N] - '0');
				N = N - 1;
			}
			else if(N != 0 && M != 0)
			{
				len3 = len3 + 1;
				plus[len3] = plus[len3] + (n[N] - '0') + (m[M] - '0');
				N = N - 1; M = M - 1;
			}
			if(plus[len3] >= 10)
			{
				plus[len3] = plus[len3] - 10;
				dap[cnt] = dap[cnt] + 1;
				plus[len3 + 1] = 1;
			}
		}
		if(plus[len3 + 1] != 0){len3 = len3 + 1;}
		for(i = 1; i <= 15; i++)plus[i] = 0;
		for(i = 0; i <= 15; i++)m[i] = 0;
		for(i = 0; i <= 15; i++)n[i] = 0;
	}
	for(i=1;i<=cnt;i++)
	{
		printf("%d\n",dap[i]);
	}
	return 0;
}