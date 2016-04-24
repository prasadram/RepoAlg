/*
 * Name : Chef Ad magical path
 * Date : 08-04-2016
 * */
/*
 * An NxM maze has a Hamiltonian cycle if and only if:
 *  min{N,M}=1 and max{N,M}=2, OR
 *  min{N,M}>=2 and at least one of N and M is even.	 
 * */
#include<stdio.h>
int main(){
	int T;
	long long int N,M;
	scanf("%d",&T);
	while(T--){
		scanf("%lld %lld",&N,&M);
		if((N==1 && M>3) ||(M==1 && N >3 ))
			printf("No\n");
		else
			if(N%2==1 && M%2==1)
				printf("No\n");
			else
				printf("Yes\n");
	}
	return 0;

}
