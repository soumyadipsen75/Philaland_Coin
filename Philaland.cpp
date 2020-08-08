#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	int num,A,n,sum;
	A=n=sum=1;
	scanf("%d",&num);
	
	while(sum<num)
	{
		A=A+1;
		sum=n+(n*2);
		n=n*2;
    }
	printf("%d\n",A);
    }
}
