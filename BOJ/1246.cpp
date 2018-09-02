#include<stdio.h>
#include<algorithm>
using namespace std;
double pr[2000];
int main()
{
	int i;
	double money_0, money_1;
	int n, m, price;
	scanf("%d%d",&n,&m);
	for(i = 0; i < m; i++)
	{
		scanf("%lf",&pr[i]);
	}
	sort(pr,pr+m);
	money_0 = 0; 
	money_1 = 0;
	for(i = 0; i < m; i++)
	{
		if((m - i) <= n)money_0 = pr[i] * (m - i);
		else money_0 = pr[i] * n;
		if(money_1 < money_0)
		{
			money_1 = money_0;
			price = pr[i];
		}
	}
	printf("%d %.lf\n",price,money_1);
	return 0;
}