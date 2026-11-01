#include<stdio.h>
int main()
{
	long long k,n,w,x;
	scanf("%lld %lld %lld",&k,&n,&w);
	x=k*w*(1+w)/2-n;
	if(x>0)
	{
		printf("%lld\n",x);
	}
	else
	{
		printf("0\n");
	}
	return 0;
}
