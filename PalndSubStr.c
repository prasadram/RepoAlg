/*
 * Name : Palindromic substrings
 * Date : 12-03-2016
 * */
#include<stdio.h>
int main(){
	int T;
	int i,j;
	int flag;
	scanf("%d",&T);
	while(T--){
		char a[1001];
		char b[1001];
		scanf("%s\n",a);
		scanf("%s",b);
		i=0;
		flag = 0;
		while(a[i]!='\0'){
			j=0;
			while(b[j]!='\0'){
				if(a[i]==b[j]){
					flag=1;
					break;
				}
				j++;
			}
			i++;
		}
		if(flag)
			printf("Yes\n");
		else
			printf("No\n");

	}
}
