/*
 * Name : Chef And Glove
 * Date : 03-03-2018
 */

#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int fingers[n],i,shealth,isFront,isBack;
		for(i=0;i<n;i++) {
			scanf("%d", &fingers[i]);
		}
		isFront = 1;
		isBack = 1;
		for(i=0;i<n;i++) {
			scanf("%d", &shealth);
			if(isFront == 1 && shealth < fingers[i]) {
				isFront = 0;
			}

			if(isBack == 1 && shealth < fingers[n-i-1]) {
				isBack = 0;
			}
		}

		if(isFront == 1 && isBack == 1) {
			printf("both\n");
		}else if(isFront == 1) {
			printf("front\n");
		}else if(isBack == 1) {
			printf("back\n");
		}else {
			printf("none\n");
		}


	}
	return 0;
}
