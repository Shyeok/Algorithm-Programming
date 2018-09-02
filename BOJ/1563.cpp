#include<stdio.h>
typedef struct
{
	int att_0, abs_0, abs2_0;
	int att_1, late_1, abs_1, abs2_1;
}C;
int main()
{
	int i, j;
	int n, dap;
	C check[1001] = {0};
	scanf("%d",&n);
	check[1].abs_0 = 1;
	check[1].att_0 = 1;
	check[1].late_1 = 1;
	for(i = 2; i <= n; i++)
	{
		check[i].att_0 = (check[i - 1].att_0 + check[i - 1].abs_0 + check[i - 1].abs2_0) % 1000000;
		check[i].abs_0 = (check[i - 1].att_0) % 1000000;
		check[i].abs2_0 = (check[i - 1].abs_0) % 1000000;
		check[i].late_1 = (check[i - 1].att_0 + check[i - 1].abs_0 + check[i - 1].abs2_0) % 1000000;
		check[i].att_1 = (check[i - 1].att_1 + check[i - 1].abs_1 + check[i - 1].abs2_1 + check[i -1].late_1) % 1000000;
		check[i].abs_1 = (check[i - 1].att_1 + check[i - 1].late_1) % 1000000;
		check[i].abs2_1 = (check[i - 1].abs_1) % 1000000;
	}
	dap = check[n].att_0 + check[n].abs_0 +check[n].abs2_0 +check[n].att_1 +check[n].late_1 +check[n].abs_1 +check[n].abs2_1;
	dap = dap % 1000000;
	printf("%d\n",dap);
	return 0;
}