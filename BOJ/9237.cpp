#include<stdio.h>
#include<algorithm>
#define Max	2000000
using namespace std;	
int time[Max];
int main()
{
	int i;
	int n, dapt;
	scanf("%d",&n);
	for(i = 0; i < n; i++)scanf("%d",&time[i]);
	sort(time,time+n);
	dapt = 0;
	for(i = 0; i < n; i++)
	{
		if(dapt < time[i] + (n - i))dapt = time[i] + (n - i);
	}
	dapt = dapt + 1;
	printf("%d\n",dapt);
	return 0;
}