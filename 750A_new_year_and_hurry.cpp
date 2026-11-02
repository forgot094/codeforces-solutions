#include<stdio.h>
int main()
{
    int n,k,f = 0,i;
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++)
    {
    	f+=5*i;
    	if(f+k>240)
    	{
    		break;
		}
	}
	printf("%d\n",i-1);
	return 0;
 } 
