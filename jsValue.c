/*���дһ������jsValue(int m,int k,int xx[])���ú����Ĺ����ǣ�����������m�ҽ���m��k��������������xx���ء�
    �����ú���writeDat()��ȡ10�����ݣ��ֱ�ó�����Ұѽ��������ļ�out.dat�С�
    ����Դ��������ļ�prog1.c�С�
    ���磺������17 5 ��Ӧ�����19��23��29��31��37��
    ����Ķ�������main()��д����writeDat()�����ݡ�
*/
#include "stdio.h"

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
}
void main()
{
	int m,k,i,*p;
	printf("m=\n");
	scanf("%d",&m);
	printf("k=\n");
	scanf("%d",&k);
	p=fun(m,k);
	for(i=0;i<k;i++)
		printf("%d\t",*(p+i));
}
