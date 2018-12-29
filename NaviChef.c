/*
 * Name : Naive Chef
 * Date : 03-10-2018
 */

#include<stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n, a, b;
		scanf("%d %d %d", &n, &a, &b);
		int dies[n+1], i, temp;
		double possibleOfA=0, possibleOfB=0;
		double result = 0, resultA=0, resultB=0;
		for(i=0;i<n+1;i++) {
			dies[i]=0;
		}
		for(i=1;i<=n;i++) {
		  scanf("%d", &dies[i]);
		}
		for(i=1;i<=n;i++) {
		  if (a == dies[i]) {
		  	possibleOfA++;
		  }
		  if(b == dies[i]) {
		  	possibleOfB++;
		  }
		  
		}
		resultA = possibleOfA/n;
		resultB = possibleOfB/n;
		result = resultA * resultB;
		printf("%.10f\n", result);


	}
	return 0;
}
