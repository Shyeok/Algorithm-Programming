#include<stdio.h>
int sum(int a, int b, int c, int d, int s)
{
	if((a+b+c+d) > s)return (a+b+c+d);
	else return s;
}
int main()
{
	int i, one, two, three, four;
	int who, score, help;
	help = score = 0;
	for(i=1;i<=5;i++)
	{
		scanf("%d %d %d %d",&one,&two,&three,&four);
		score = sum(one,two,three,four,score);
		if(score != help){who = i;}
		help = score;
	}
	printf("%d %d",who,score);
	return 0;
}