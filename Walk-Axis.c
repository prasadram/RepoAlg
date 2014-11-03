/*
 * Walk on the Axis
 * Date : 3-11-2014
 * Practice : Easy (old)
 * Formula 2N+(N*(N-1)/2)
 */

 #include<stdio.h>
 int main(){
 	long long int T;
	long long int N;
	long long int result;
	scanf("%lld",&T);
	while(T--){
	 scanf("%lld",&N);
	 result = (2*N)+(N*(N-1)/2);
	 printf("%lld\n",result);
	}
 return 0;
 }
