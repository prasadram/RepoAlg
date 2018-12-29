/*
 * Name : Chef and Happiness
 * Date : 08-11-2018
 * */
#include<stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n;
		scanf("%d", &n);
		int a[n+1],i,j,isPresent=0;
		
		for(i=1;i<n+1;i++) {
			scanf("%d", &a[i]);
		}
		for(i=1;i<n+1;i++) {
			for(j=i+1;j<n+1;j++) {
				if(a[i]!=a[j] && a[a[i]]==a[a[j]]) {
					isPresent = 1;
					break;
				}
			}
			if(isPresent==1) {
				break;
			}
		}
		if (isPresent == 1) {
			printf("Truly Happy\n");
		} else  {
			printf("Poor Chef\n");
		}
	}
	return 0;
}
