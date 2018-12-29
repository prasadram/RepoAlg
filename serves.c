/*
 * Name : Chef and Serves
 * Date : 06-10-2018
 * */

#include<stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		long p1,p2,k, sum=0, quo=0;
		scanf("%ld %ld %ld", &p1, &p2, &k);
		sum = p1 + p2;
		quo = sum/k;
		if(quo%2==0) {
			printf("CHEF\n");
		} else {
			printf("COOK\n");
		}

	}
	return 0;
}
