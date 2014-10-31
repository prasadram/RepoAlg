#include<stdio.h>
#include<assert.h>
// CHEFGR : 3-10-2014

int main()
{
	int T;
	int M;
	int N;
	int max;
	int temp;
	int i;
	int A[100];
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d",&N,&M);
		max=0;
		  for(i=0;i<N;i++)
		  {
			scanf("%d",&temp);
			max=max+temp;
		  }
		 // for(i=0;i<N;i++)
		  //{
		 //	temp=max-A[i];
	//		M=M-temp;
		  //}
		  if((M+max)%N==0)
		       printf("Yes\n");
		  else
		        printf("No\n");

	}
}
