#include<stdio.h>
#include<assert.h>
#define REP(i,a,b) for(i=a;i<b;i++)
#define AIN(a,b,c) assert(a<=b && b<=c)
long long gcd(long long a,long long b);
int main()
{
    long long N;
    long long T;
    long long M;
    long long i;
    long long e1;
    long long e2;
    long long o1;
    long long o2;
    long long x;
    long long y;
    long long g;
    assert(scanf("%lld",&T)==1);
    if((1 <= T) && (T <= 100000))
    {
        REP(i,0,T)
	{
	    scanf("%lld %lld",&N,&M);
	    AIN(1,N,1000000000);
	    AIN(1,M,1000000000);
	    e1=N/2;
	    o1=N-e1;
	    e2=M/2;
	    o2=M-e2;
	    x=(e1*o2)+(e2*o1);
	    y=(N*M);
	    g=gcd(x,y);
	    printf("%lld/%lld\n",x/g,y/g);
	    //printf("x is %d y is %d\n",x,y);

	}
    }
   return 0;
} 
long long gcd(long long a,long long b)
{
	long long t;
	while(b!=0)
	{
		t=b;
		b=a%b;
		a=t;
	}
	return a;
}
