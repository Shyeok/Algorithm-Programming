#include<stdio.h>
int min(int a, int b)
{
	if(a < b)return a;
	else return b;
}
int main()
{
	int x, y, w, h;
	int d = 2000;
	scanf("%d %d %d %d",&x,&y,&w,&h);
	d = min(x,d);
	d = min(y,d);
	d = min(w - x,d);
	d = min(h - y,d);
	printf("%d\n",d);
	return 0;
}