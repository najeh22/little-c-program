#include "stdio.h"
#include <stdlib.h>
/*
export 9*9 table
*/
void main()
{
	int i,j,k,result;
	for(i=1;i<=9;i++)
	{
		for(k=0;k<i-1;k++)
				printf("\t");//allign the upper and lower
		for(j=i;j<=9;j++)
		{
			result = i*j;
			printf("%d*%d=%3d ",i,j,result);
		}
		printf("\n");
	}
	system("pause");
}