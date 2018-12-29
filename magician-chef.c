/*
 * Name : Magician versus Chef
 * Date : 11-09-2018 
 * */

#include<stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n, x, s, i;
		scanf("%d %d %d", &n, &x, &s);
		int box[n];
		for(i=0;i<n;i++){
			box[i]=0;
		}
		box[x-1]=1;
		int result=-1, a, b, temp;
		for(i=0;i<s;i++){
			scanf("%d %d", &a, &b);
			if(box[a-1]==1){
				result = b;
			}
			if(box[b-1]==1){
				result = a;
			}
			temp = box[a-1];
			box[a-1] = box[b-1];
			box[b-1] = temp;
		}
		if (result == -1) {
			printf("%d\n", x);
		} else {
			printf("%d\n", result);
		}
	}
}
