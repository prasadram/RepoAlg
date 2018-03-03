/*
 * Name : Faded Palindromes
 * Date : 04-09-2016
 */
#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char str[12346];
		char out[12346];
		int len,i,flag=0;
		scanf("%s",str);
		len = strlen(str);

		for(i=0;i<len;i++){
			if((str[i]!='.' && str[len-i-1]!='.')&&(str[i]!=str[len-i-1])){
				flag = 1;
				break;
			}else
			if(str[i]=='.'){
				if(str[len-i-1]=='.'){
					out[i]='a';
					str[len-i-1]='a';
				}else{
					out[i]=str[len-i-1];
				}
			}else{
				out[i]=str[i];
			}
		}
		out[i]='\0';
		if(flag==0){
				printf("%s\n",out);
		}else{
				printf("-1\n");
		}
	}
}
