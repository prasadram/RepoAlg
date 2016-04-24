/*
 * Name : Chef and Ballons
 * Date : 05-08-2016
 * */
#include<stdio.h>
int main(){
	int T;
 	long long int k,min,result,nonzero,i,j,d,temp;
	scanf("%d",&T);
	while(T--){
		long long int a[3];
		scanf("%lld %lld %lld",&a[0],&a[1],&a[2]);
		scanf("%lld",&k);
		if(k==1){
			printf("1\n");
		}else{
			result = 0;
			for(i=0;i<2;i++){
				for(j=0;j<2;j++)
				if(a[j]>a[j+1]){
					temp = a[j];
					a[j] = a[j+1];
					a[j+1] = temp;
				}
			}
			if(k<=a[0]){
				result = result + (k-1)*3+1;
			}else{
				d = 3;
				result = result + (a[0] * d);
				k = k - a[0];
				a[1] = a[1] - a[0];
				a[2] = a[2] - a[0];
				d--;
				if(k<=a[1]){
					result = result + ((k-1)*d)+1;
				}else{
					result = result + a[1]* d;
					k = k - a[1];
						result = result + k;
				}
			}
			printf("%lld\n",result);
		}
	}
	return 0;
}

