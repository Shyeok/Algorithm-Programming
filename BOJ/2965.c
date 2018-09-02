#include <stdio.h>
int wa, wb, wc;
int main()
{
	int dap;
	dap = 0;
	scanf("%d %d %d",&wa,&wb,&wc);
	if(wb - wa - 1 > dap){dap = wb - wa - 1;}
	if(wc - wb - 1 > dap){dap = wc - wb - 1;}
	printf("%d",dap);
	return 0;
}