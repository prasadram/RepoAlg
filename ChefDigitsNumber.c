/*
 * Name : Chef and digits of a number
 * Date : 03-09-2016
 */
#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char str[100002];
		scanf("%s",str);
		int i=0;
		int ones=0,zeros=0;
		while(str[i]!='\0'){
			if(str[i]=='1')
			  ones++;
			else
			  zeros++;
			i++;
		}
		if(i==1){
			printf("Yes\n");
		}else
		if(i==2){
			if(ones==2 || zeros==2){
				printf("No\n");
			}else{
				printf("Yes\n");
			}
		}else{
			if(ones==1 || zeros==1){
				printf("Yes\n");
			}else{
				printf("No\n");
			}
		}
	}
}
