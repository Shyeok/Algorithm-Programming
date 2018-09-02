#include <stdio.h>
int n, m;
int turn1[10000], turn2[10000];
int main()
{
	int i, help, a, b;
	int cnt1, cnt2, ok;
	cnt1=cnt2=0;
	scanf("%d %d",&n,&m);
	ok = 0;
	while(ok == 0) 
	{
		cnt1=cnt1+1;
		turn1[cnt1] = n %10;
		if(n / 10 == 0)
		{
			ok = 1;
		}
		n = n / 10;
	}
	ok = 0;
	while(ok == 0) 
	{
		cnt2=cnt2+1;
		turn2[cnt2] = m %10;
		if(m / 10 == 0)
		{
			ok = 1;
		}
		m = m / 10;
	}
	help = 1;
	a = b = 0;
	for(i=cnt1;i>=1;i--)
	{
		a = a + turn1[i]*help;
		help = help * 10;
	}
	help = 1;
	for(i=cnt2;i>=1;i--)
	{
		b = b + turn2[i]*help;
		help = help * 10;
	}
	if(a>b)printf("%d",a);
	if(b>a)printf("%d",b);
	return 0;
}