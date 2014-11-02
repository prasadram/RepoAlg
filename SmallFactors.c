/*
 * Small Factors
 * Practice : Easy
 * Date : 1-11-2014
 */

#include<stdio.h>
int main(){
	int a[200];
	int m;
	int t;
	int index;
	int number;
	int n;
	int i;
	int temp;
	int x;
	int j;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&number);
		n=1;
		index=0;
		m=1;
		a[0]=1;
		for(n=1;n<=number;n++){
		   temp=0;
		  for(i=0;i<m;i++){
			x=(a[i]*n)+temp;			
			a[i]=x%10;
			temp=x/10;
		  }
		  while(temp>0){
			a[m]=temp%10;
			m++;
			temp=temp/10;
		  }
		}
		for(i=m-1;i>=0;i--)
		 printf("%d",a[i]);
		 printf("\n",a[i]);

	}
}
