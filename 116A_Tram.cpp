#include<stdio.h>
int main()
{
	int n,current=0,max=0;
	scanf("%d",&n);
	while(n--)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		current+=b-a;
		if(current>max)
		{
			max=current;
		}
	}
	printf("%d\n",max);
	return 0;
 } 
