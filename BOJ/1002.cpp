#include<stdio.h>
#include<math.h>
int dap[10000];
int main()
{
		int i, j, t;
		double x_1, y_1, r_1, x_2, y_2, r_2;
		double len;
		scanf("%d",&t);
		for(i = 0; i < t; i++)
		{
			scanf("%lf %lf %lf %lf %lf %lf",&x_1,&y_1,&r_1,&x_2,&y_2,&r_2);
			len = (x_1 - x_2) * (x_1 - x_2) + (y_1 - y_2)*(y_1 - y_2);
			if(len == 0)
			{
				if(r_1 == r_2)dap[i] = -1;
				else if(r_1 != r_2)dap[i] = 0;
			}
			else if(len != 0)
			{
				if(len == (r_1 + r_2) * (r_1 + r_2))dap[i] = 1;
				else if(len > (r_1 + r_2) * (r_1 + r_2))dap[i] = 0;
				else if(len == (r_1 - r_2) * (r_1 - r_2))dap[i] = 1;
				else if(len < (r_1 - r_2) * (r_1 - r_2))dap[i] = 0;
				else if(len <= (r_1 + r_2) * (r_1 + r_2))dap[i] = 2;
			}
		}
		for(i = 0; i < t; i++)
		{
			printf("%d\n",dap[i]);
		}
		return 0;
}