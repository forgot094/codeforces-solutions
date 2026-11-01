#include<stdio.h>
int main()
{
	long long t;
	scanf("%lld",&t);
	while(t--)
	{
		long long a,b;
		scanf("%lld %lld",&a,&b);
		if(a % b == 0)
		{
			printf("0\n");
		}
		else
		{
				printf("%lld\n",b-(a%b));
		
		}
	}
	return 0;
}
