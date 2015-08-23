/*请编写一个函数jsValue(int m,int k,int xx[])，该函数的功能是：将大于整数m且紧靠m的k个素数存入数组xx传回。
    最后调用函数writeDat()读取10组数据，分别得出结果且把结果输出到文件out.dat中。
    部分源程序存在文件prog1.c中。
    例如：若输入17 5 则应输出：19，23，29，31，37。
    请勿改动主函数main()和写函数writeDat()的内容。
	please write a function jsValue(int m,int k,int xx[])).the function is: send the k prime numbers that is larger than m to an array.
	finally use writeDat() to read ten sets of data, and send them to out.dat
	some source program is stored in prog1.c
	for example, if you input 17 5, then the function will output 19,23,29,31,37
	please do not change the content of main() and writeDat();
*/
#include "stdio.h"
#include "stdlib.h"

int isprime(int m)//judge whether m is a prime number
{
	int i;
	for(i=2;i<=m/2;i++)
	{
		if(m%i==0)
			return(0);
	}
	return(1);
}
int *fun(int m,int k)//output k prime numbers that is larger than m
{
	int i;
	int count=0;
    int *a = (int *)malloc(sizeof(int) *k);
	int *p;
	p=&a[0];
	for(i=0;count<k;i++)
	{
		if(isprime(m+i))//judge whether it is prime
		{
			*p=m+i;
			p=p+1;
			count++;
		}
	}
	return a;
}
void writeDat()//in this function, the data will be sent to out.dat
{
	int i,m,k,*p,n;
	FILE *wf;
	wf=fopen("out.dat","w");
	for(i=0;i<10;i++)
	{
		printf("m=\n");
		scanf("%d",&m);
		printf("k=\n");
		scanf("%d",&k);
		fprintf(wf,"m=%d\tk=%d\n",m,k);
		p=fun(m,k);
		for(n=0;n<k;n++)
		{
			printf("%d\t",*(p+n));
			fprintf(wf,"%d\t",*(p+n));
		}
		printf("\n");
		fprintf(wf,"\n\n");
	}
	fclose(wf);
}

void main()
{
	writeDat();
	system("pause");
}
