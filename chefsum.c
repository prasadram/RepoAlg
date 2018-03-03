/*
 * Name : Little Chef and Sums
 * Date : 02-09-2017
 */

#include<stdio.h>

int main(){
	int t,n;
	scanf("%d",&t);
	while(t--) {
		scanf("%d", &n);
		int a[n],i;
		long long int pre[n],suf[n];
		scanf("%d",&a[0]);
		pre[0]=a[0];
		for(i=1; i<n;i++) {
			scanf("%d",&a[i]);
			pre[i] = pre[i-1] + a[i];
		}
		suf[n-1]=a[n-1];
		for(i=n-2;i>-1;i--){
			suf[i] = suf[i+1] + a[i];
		}
		long int min = 10000000000001;
		int minind = 0;
		long long int sum=0;
		for(i=0;i<n;i++) {
			sum = pre[i] + suf[i];
			//printf("pre: %lld suf: %lld sum: %lld\n",pre[i],suf[i],sum);
			if( sum < min) {
				min = sum;
				minind = i;
			}
		}
		printf("%d\n",minind+1);

	}
	return 0;
}
