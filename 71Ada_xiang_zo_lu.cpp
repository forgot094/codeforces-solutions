#include<stdio.h>
int main()
{
	int x,z;
	scanf("%d",&x);
	if(x <= 5 && x >= 1)
	{
		z=1;
	}
	else if(x % 5 == 0)
	{
		z=x/5;
	}
	else
	{
		z=x/5+1;
	}
	printf("%d\n",z);
	return 0;
}
