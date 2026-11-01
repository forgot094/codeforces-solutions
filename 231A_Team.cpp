#include<stdio.h>
int main()
{
	int n,num=0;
	scanf("%d",&n);
	while(n--)
	{
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);
		if(a + b + c >= 2)
		{
			num++;
		}
	}
	printf("%d\n",num);
	return 0;
}

