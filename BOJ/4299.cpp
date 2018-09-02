#include<stdio.h>
int n, m;
int check_1(double a,double b)
{
	if((a + b - (int)a - (int)b) != 0)return 1;
	else return 0;
}
int check_2(double a,double b)
{
	if(a < 0 || b < 0)return 1;
	else return 0;
}
int main()
{
	double score_1, score_2;
	scanf("%d %d",&n,&m);
	score_1 = (n + m) * 0.5;
	score_2 = (n - m) * 0.5;
	if(check_1(score_1,score_2) == 1 || check_2(score_1,score_2) == 1)printf("-1\n");
	else printf("%.lf %.lf\n",score_1,score_2);
	return 0;
}