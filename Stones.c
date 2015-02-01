/*
 * Problem : Chef and Stones
 * Date : 2-1-2015
 */
 #include<stdio.h>
 int main()
 {
 	int T,N,K;
	int i;
	long long int temp;
	long long int max;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d %d",&N,&K);
		long long int time[N];
		for(i=0;i<N;i++)
		{
		 scanf("%lld",&temp);
		 time[i]=K/temp;
		}
		max=0;
		for(i=0;i<N;i++)
		{
			scanf("%lld",&temp);
			if(max<time[i]*temp)
			{
			  max=time[i]*temp;
			}
		}
		printf("%lld\n",max);
	}
 	return 0;
 }
