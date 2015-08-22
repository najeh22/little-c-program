#include "stdio.h"
#include <stdlib.h>

/*export all The number of daffodils*/
void main(){
	int i,j,k,w;
	for(i=100;i<1000;i++)
	{
		j=i%10;//ones place
		k=(i%100-j)/10;//tens place
		w=(i-k*10-j)/100;//hundred place
		if(i==j*j*j+k*k*k+w*w*w)
			printf("%d\n",i);
	}
	system("pause");
}