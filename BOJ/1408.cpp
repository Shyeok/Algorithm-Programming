#include<stdio.h>
int presentT, startT;
int time[5];
int main()
{
	int i, help;
	char a, b, c;
	for(i = 1; i <= 3; i ++)
	{
		scanf("%c%c",&a,&b);
		time[i] =((a-'0')*10) + (b - '0');
		if(i != 3)
		{
			scanf("%c",&c);
		}
	}
	presentT = time[1] * 3600 + time[2] * 60 + time[3];
	getchar();
	for(i = 1; i <= 3; i ++)
	{
		scanf("%c%c",&a,&b);
		time[i] =((a-'0')*10) + (b - '0');
		if(i != 3)
		{
			scanf("%c",&c);
		}
	}
	startT = time[1] * 3600 + time[2] * 60 + time[3];
	help = startT - presentT;
	if(help > 0)
	{
		time[1] = help / 3600;
		help = help % 3600;
		time[2] = help / 60;
		time[3] = help % 60;
		printf("%02d:%02d:%02d",time[1],time[2],time[3]);
	}
	if(help < 0)
	{
		help = help + (24 * 3600);
		time[1] = help / 3600;
		help = help % 3600;
		time[2] = help / 60;
		time[3] = help % 60;
		printf("%02d:%02d:%02d",time[1],time[2],time[3]);
	}
	return 0;
}