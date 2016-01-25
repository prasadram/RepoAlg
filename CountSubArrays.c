/*
 * Name : Count Sub Arrays
 * Date : 2-10-2015
 * */

#include<stdio.h>

int main(){
	int N,T;
	long long int A,B;
	long long int count,tempC;
	int flag;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&N);
		count = N;
		tempC = 1;
		flag=0;
		if(N>1){
		scanf("%lld %lld",&A,&B);
		N--;
		N--;
		if(B>=A){
			tempC++;
		}
		while(N--){
			A = B;
			scanf("%lld",&B);
			if(B>=A){
				tempC++;
				flag=0;
			}else{
				//count = count + (tempC-1);
				count = count + (tempC*(tempC-1)/2);
				tempC = 1;
				flag=1;
			}
		}
		if(flag==0){
				count = count + (tempC*(tempC-1)/2);
		}
		}else{
			scanf("%lld",&A);
		}
		printf("%lld\n",count);

	}
	return 0;
}
