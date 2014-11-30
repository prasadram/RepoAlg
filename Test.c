/*
 * Name : TEST
 * old
 */
#include<stdio.h>
 
 int main(){
 int number;
 	do{
 		scanf("%d",&number);
 		if(number>100 || number==42)
 			break;
		 printf("%d\n",number);
	 }while(1);
 	 return 0;
 }
