/*
 * Name: ATM
 */
#include<stdio.h>
int main(){
 
int withdrawl;
float balance;
float result;
scanf("%d %f",&withdrawl,&balance);
result=balance;
if(withdrawl%5==0 && (withdrawl<=(balance-0.50))){
result=balance-(withdrawl+0.50);
}
printf("%.2f",result);
return 0;
}
