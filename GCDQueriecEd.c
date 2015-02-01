/*
 * Problem : GCD Queries
 * Date : 2-1-2015
 * Solution : Editorial
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
		int prefix[N];
		int suffix[N];
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
		prefix[0]=numbers[0];
		suffix[N-1]=numbers[N-1];
		
		for(i=1;i<N;i++)
		 prefix[i]=gcd(prefix[i-1],numbers[i]);

		for(i=N-2;i>=0;i--)
		 suffix[i]=gcd(suffix[i+1],numbers[i]);
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
			 L--;R--;
			res=0;
			if(L==0 && R<=N-1)
			  res = suffix[R+1];
			else
			 if(L>=0 && R==N-1)
			  res = prefix[L-1];
			 else
			  res = gcd(prefix[L-1],suffix[R+1]);
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


// Editorial
/*

PROBLEM:

You are given an array A of integers of size N. You will be given Q queries where each query is represented by two integers L, R. You have to find the gcd(Greatest Common Divisor) of the array after excluding the part from range L to R inclusive (1 Based indexing). You are guaranteed that after excluding the part of the array remaining array is non empty.
1 ≤ N, Q ≤ 100000
EXPLANATION:

If you do it naively(ie. calculating GCD of remaining array for each query), the worstcase complexity will be O(N * Q).
Let's denote by G(L, R), the GCD of AL, AL+1 ... AR. We can observe that for query [L, R], we need GCD of G(1, L-1) and G(R+1, N).
So, we precalculate prefix and suffix gcd arrays.
If we have:
Prefixi = GCD of A1, A2 ... Ai
Suffixi = GCD of AN, AN-1 ... Ai
answer to query [L, R], would be GCD of PrefixL-1 and SuffixR+1.

We can calculate prefix and suffix arrays in O(N) if we notice that:
Prefixi = GCD(Prefixi-1, Ai)
Suffixi = GCD(Suffixi+1, Ai)

Pseudo Code for building prefix and suffix arrays:

n,a=input
pre[n],suf[n]

//base case
pre[1]=a[1]
suf[n]=a[n]

for i=2 to n:
    pre[i] = gcd(pre[i-1], a[i])

for i=n-1 to 1:
    suf[i] = gcd(suf[i+1], a[i])

So, overall complexity would be O((N + Q) * K), where K is a constant factor for gcd calculation.

*/
