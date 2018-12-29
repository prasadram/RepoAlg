/*
 * Name : Strike or Spare
 * Date : 14-07-2018
 * */

#include<stdio.h>
#include<stdlib.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n;
		scanf("%d", &n);
		int q = n/2, i;
		char result1[50005];
		result1[0]='1';
		for(i=1;i<q+1;i++) {
			result1[i]='0';
		}
		result1[i]='\0';
		printf("1 %s\n", result1);
	}
}
