#include <stdio.h>

int main()
{
	int n=0, m=0, sum=0, cnt=0;
	int a[10000]={0,};
	scanf("%d%d", &n, &m);

	for(int i=0; i < 1000; i++)
	{
		for(int j=0; j<=i; j++)
		{
			if(cnt > 1000 )
				break;
			a[cnt] = i+1;
			cnt++;
			
		}

	}
	for(int i=n-1; i<=m-1; i++)
	{
		sum += a[i];
	}

	printf("%d\n", sum);
	return 0;
}