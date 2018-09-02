#include<stdio.h>
int a[100001];
int main()
{
	int i, j, o, t, ok = 0;
	int n, m = 0, k, r, round = 0;
	scanf("%d %d %d",&n,&k,&r);
	if(k < r)
	{
		o = k; t = r;
	}
	else {o = r; t = k;}
	for(i = 1; i <= n; i++)a[i] = i;
	for(;;)
	{
		round = round + 1;
		for(i = 1; i < n; i = i + 2)
		{
			if(a[i] != o && a[i + 1] != t && a[i] != t && a[i + 1] != o)
			{
				m = m + 1;
				a[m] = a[i];
			}
			else if(a[i] == o && a[i + 1] == t)
			{
				ok = 1;
				break;
			}
			else if(a[i] == o || a[i] == t)
			{
				m = m + 1;
				a[m] = a[i];
			}
			else if(a[i + 1] == o || a[i + 1] == t)
			{
				m = m + 1;
				a[m] = a[i + 1];
			}
		}
		if(ok == 1)break;
		if(n % 2 == 1)
		{
			m = m + 1;
			a[m] = a[n];
		}	
		if(m == 1)break;
		n = m;
		m = 0;
	}
	if(ok == 1)printf("%d\n",round);
	else if(ok != 1)printf("-1");
	return 0;
}