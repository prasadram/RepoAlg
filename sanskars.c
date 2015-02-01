/*
 * Problem : XOR with Subset
 * Date : 5-12-2014
 */
#include<stdio.h>
#include<math.h>

int main()
{
	int T;
	int N;
	int K;
	int count,i,size,t,avg,sum,j;
	scanf("%d",&T);
	while(T--){
		scanf("%d %d",&N,&K);
		int numbers[N];
		size=pow(2,N);
		sum=0;
		for(i=0;i<N;i++){
		 scanf("%d",&numbers[i]);
		 sum=sum+numbers[i];
		 }
		 avg=sum/K;
		 j=0;
	    if(sum%K==0 && K<=N){
		for(count=0;count<size;count++)
		{
			t=0;
			for(i=0;i<N;i++)
			{
				if(count & (1<<i))
				{
					//printf("%d",numbers[i]);
					t=t+numbers[i];
				}
			}
			if(t==avg)
			{
				j++;
				if(j==K)
				 break;
			}
			//printf(" sum:%d j is %d\n ",t,j);
		}
		if(j==K)
		 printf("yes\n");
		else
		 printf("no\n");
	    }else
	     printf("no\n");

	}
}
