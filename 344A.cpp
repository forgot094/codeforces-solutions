#include<stdio.h>
int main()
{
	int n,i=0;
	scanf("%d",&n);
	while(n--)
	{
		int a,b;
		scanf("%d",&a);
		if(a!=b)
		{
			i++;
		}
		b=a;
	}
	printf("%d\n",i);
	return 0;
}
