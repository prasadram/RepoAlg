/*
 * Name : Chef and Array
 * Date : 03-04-2015
 */
#include<stdio.h>

int main()
{
	int N;
	scanf("%d",&N);
	long int array[N];
	long int M,x,y;
	int i,j;
	long int sum,temp,max;
	for(i=0;i<N;i++)
	{
		scanf("%ld",&array[i]);
	}
	scanf("%ld %ld %ld",&M,&x,&y);
	sum=0;
	max=0;
	if(x<y)
	{
		for(i=x;i<=y;i++)
		{
			if(array[i]>max)
				max = array[i];
		}
	}else
	{
		for(i=y;i<=x;i++)
		{
			if(array[i]>max)
				max = array[i];
		}
	}
	sum = sum + max;
	for(j=1;j<M;j++)
	{
		x = (x + 7)%(N-1);
		y = (y + 11)%N;
		max=0;
		if(x<y)
		{
			for(i=x;i<=y;i++)
			{
				if(array[i]>max)
					max = array[i];
			}
		}else
		{
			for(i=y;i<=x;i++)
			{
				if(array[i]>max)
					max = array[i];
			}
		}
		sum = sum + max;
	}
	printf("%ld\n",sum);
	return 0;
}
