#include <stdio.h>

int main()
{
	int number[10];
	int i,n,x,count;
	printf("enter the array = ");
	scanf("%d",&n);
	count=0;
	printf("enter the value of the array= ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&number[i]);
	}
	for(i=0;i<n;i++)
	{
		count=1;
		for(x=i+1;x<n;x++)
			{
				if(number[i]==number[x]&& number[i] !=0)
				{
					count++;
					number[x]=0;
				}	
			}
			if(number[i] !=0)
			printf("%d included %d\n",number[i],count);
	}
}