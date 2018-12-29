/*
 * Name: Workers
 * Date: 09-04/2018
 */

#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int price[n+1],i;
	
	for(i=0;i<n;i++) {
		scanf("%d", &price[i]);
	}

	int pt=100001,pa=100001,pta=100001,worker;

	for(i=0;i<n;i++) {
		scanf("%d", &worker);
		switch(worker) {
			case 1:
				if(price[i] <= pt) {
					pt = price[i];
				}
				break;
			case 2:
				if(price[i] <= pa) {
					pa = price[i];
				}
				break;
			case 3:
				if(price[i] <= pta) {
					pta = price[i];
				}
				break;
		}
	}

	int sum1 = 0;
	sum1 = pt + pa;
	if(sum1 < pta) {
		printf("%d\n", sum1);
	}else {
		printf("%d\n", pta);
	}
	return 0;	
}
