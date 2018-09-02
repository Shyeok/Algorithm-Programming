#include<stdio.h>
int main()
{
	int i;
	int n, m;
	int train = 0, maxtrain = 0;
	for(i = 0; i < 10; i++)
	{
		scanf("%d %d",&n,&m);
		train = train - n;
		train = train + m;
		if(train > maxtrain)maxtrain = train;
	}
	printf("%d\n",maxtrain);
	return 0;
}