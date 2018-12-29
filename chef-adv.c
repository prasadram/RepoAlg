/*
 * Name : Chef and Adventures
 * Date : 13-09-2018
 * */
#include<stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		long int N,M,X,Y;
		scanf("%ld %ld %ld %ld", &N,&M,&X,&Y);
		long int n=1,m=1, n1=-1, m1=-1;
		if(n+1 == N && m+1 == M) {
			printf("Chefirnemo\n");
		} else {
			n = N - 1;
			m = M - 1;
			n1 = n % X;
			m1 = m % Y;
			//printf("n1=%ld m1=%ld\n", n1,m1);
			if ((n1==1 && m1==1) || (n1==0 && m1==0)) {
				printf("Chefirnemo\n");
			} else {
				printf("Pofik\n");
			}
		}
	}
	return 0;
}
