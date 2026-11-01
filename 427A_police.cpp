#include<stdio.h>
int main()
{
	int n,i=0,num=0,a;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&a);
		if(a == -1)
		{
			if(num == 0)
			{
				i++;
			}
			else if(num > 0)
			{
				num--;
			}
		}
		else if(a > 0)
		{
			num += a;
				}		
	}
	printf("%d\n",i);
	
	return 0;
}
