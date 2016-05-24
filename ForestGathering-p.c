/*
 * Name :Forest Gathering
 * Date :11-05-2016
 * */

#include <stdio.h>
 
int main(void) {
	long long int N,W,L;
	int i;
	scanf("%lld %lld %lld",&N,&W,&L);
	long long int t;
	long long int initial[N];
	long long int factor[N];
	//long long temp[N];
	for(i=0;i<N;i++){
	    scanf("%lld %lld",&initial[i],&factor[i]);    
	}
	long long sum=0;
	for(i=1,t=1;i<=N;i++){
	 initial[i-1] = initial[i-1] + factor[i-1];
	 if(initial[i-1]>=L)
	    sum = sum + initial[i-1];
	 if(sum>=W){
	     break;
	 }
	 if(i==N){
	    i=0;
	    t++;
	    sum=0;
	 }
	}
	printf("%lld\n",t);
	return 0;
}
