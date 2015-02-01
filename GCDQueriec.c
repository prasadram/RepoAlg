/*
 * Problem : GCD Queries
 * Date : 2-1-2015
 */
#include<stdio.h>
int main()
{
	int T;
	int N,Q,L,R;
	int i,j,k,res,flag,a;
	char c;
	//scanf("%d",&T);
			c = 0;
			while(c<33)
			 c=getc(stdin);
			 T=0;
			 while(c>33)
			 {
			   T=T*10+c-'0';
			   c=getc(stdin);
			 }
	while(T--)
	{
		//scanf("%d %d",&N,&Q);
			c = 0;
			while(c<33)
			 c=getc(stdin);
			 N=0;
			 while(c>33)
			 {
			   N=N*10+c-'0';
			   c=getc(stdin);
			 }
			c = 0;
			while(c<33)
			 c=getc(stdin);
			 Q=0;
			 while(c>33)
			 {
			   Q=Q*10+c-'0';
			   c=getc(stdin);
			 }
		int numbers[N];
		for(i=0; i<N; i++)
		{
			//scanf("%d",&numbers[i]);
			c = 0;
			while(c<33)
			 c=getc(stdin);
			 a=0;
			 while(c>33)
			 {
			   a=a*10+c-'0';
			   c=getc(stdin);
			 }
			 numbers[i]=a;
		}
		for(i=0; i<Q; i++)
		{
			//scanf("%d %d",&L,&R);
			c = 0;
			while(c<33)
			 c=getc(stdin);
			 L=0;
			 while(c>33)
			 {
			   L=L*10+c-'0';
			   c=getc(stdin);
			 }
			c = 0;
			while(c<33)
			 c=getc(stdin);
			 R=0;
			 while(c>33)
			 {
			   R=R*10+c-'0';
			   c=getc(stdin);
			 }
			res=0;
			if(L>1)
			{
				res=numbers[0];
				for(j=1; j<L-1; j++)
				{
					res=gcd(res,numbers[j]);
				}
			}
			if(res==0)
			{
				res=numbers[R];
				for(k=R+1; k<N; k++)
				{

					res = gcd(res,numbers[k]);
				}
			}
			else
			{
				for(k=R; k<N; k++)
				{
					res=gcd(res,numbers[k]);

				}
			}
			printf("%d\n",res);
		}

	}
	return 0;
}
int gcd(int a,int b)
{
	int t;
	while(b!=0)
	{
		t=b;
		b=a%b;
		a=t;
	}
	return a;
}
