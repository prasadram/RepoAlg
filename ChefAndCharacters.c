/*
 *Name: Chef And His Characters
 *Date: 11-02-2018
 **/

#include<stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		char string[600000];
		scanf("%s", string);
		int i=0,j=0,k=0,isSequence=0,count=0, length=0,sum=0,flag=0;
		char chefChar='a';
		int chars[4];
		for(j=0;j<4;j++) {
			chars[j]=0;
		}
		while(string[i]!='\0') {
			//printf("index :%d length : %d\n", i, length);
			flag=0;
			if( string[i]=='c' || string[i]=='h' || string[i]=='e' || string[i]=='f' ) {
				chefChar = string[i];
				length++;
			} else {
				length = 0;
			}

			if (length ==  4){
				sum = string[i]+string[i-1]+string[i-2]+string[i-3];
						for(j=0;j<4;j++){
						//	printf("sub char %c\n", string[i-j]);
							switch(string[i-j]) {
								case 'c':
									chars[0]++;
									continue;
								case 'h':
									chars[1]++;
									continue;
								case 'e':
									chars[2]++;
									continue;
								case 'f':
									chars[3]++;

							}
						}
						for(j=0;j<4;j++){
							if(chars[j]>1){
								flag=1;
							}
							chars[j]=0;
						}
				if (flag==0) {
					count++;
					length--;
				}else {
					length--;
					for(k=0;k<3;k++) {
					//printf("string %s, lenght : %d index %d\n",string,length,i);
						for(j=0;j<length;j++){
						//	printf("sub char %c\n", string[i-j]);
							switch(string[i-j]) {
								case 'c':
									chars[0]++;
									continue;
								case 'h':
									chars[1]++;
									continue;
								case 'e':
									chars[2]++;
									continue;
								case 'f':
									chars[3]++;
									continue;
								default:
									printf("%c",string[i-j]);
									length--;

							}
						}
						for(j=0;j<4;j++){
							if(chars[j]>1){
								length--;
							}
							chars[j]=0;
						}
					}
					sum = 0;
				}
				//printf("i:%d sum:%d length:%d\n", i, sum, length);
			}
			i++;

		}
		if( count > 0) {
			printf("lovely %d\n", count);
		} else {
			printf("normal\n");
		}

	}
	return 0;
}
