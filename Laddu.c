/*
 * Name : Laddu
 * Date : 08-05-2016
 **/
#include<stdio.h>
int main(){
	int T;
	char buffer[100],buf[100];
	char *orig=buffer,acttype[100];
	int act,ransc,temp,i,total;
	scanf("%d",&T);
	while(T--){
		scanf("%d %s\n",&act,orig);
		char first,ch;
		total = 0;
		while(act--){
			i=0;
			ransc=-1;
			do{
				ch = getc(stdin);
				acttype[i++]=ch;
				if(ch==' '){
					ransc = 0;
						ch = getc(stdin);
					while(ch>33){
					//	printf("number found ch %c \n",ch);
						ransc = ransc * 10 + ch -'0';
						ch = getc(stdin);
					}
				}
			}while(ch!='\n');
			i--;
			acttype[i]='\0';
			if(acttype[0]=='C'){
				if(ransc!=-1){
					total = total + 300;
					if(ransc<=19){
						total = total + 20 - ransc;
					}
				}else{
					total = total + 50;
				}
			}
			if(acttype[0]=='B'){
				total = total + ransc;
			}
			if(acttype[0]=='T'){
				total = total + 300;
			}
		}
		if(orig[0]=='I'){
			printf("%d\n",(total/200));
		}else
			if(orig[0]=='N'){
				printf("%d\n",(total/400));
			}
			//printf("Total Score:%d\n",total);
	}
	return 0;
}
