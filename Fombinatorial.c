/*
 * name : Fombinatorial
 * Diff : Easy
 */
 #include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int N;
int M;
int r;
int Q;
int T;
int result;
int temp1;
int temp2;
int temp3;
int res;
scanf("%d",&T);
while(T--){
scanf("%d %d %d",&N,&M,&Q);
while(Q--){
// printf("enter value of r\n");
scanf("%d",&r);
temp1=getNr(N,r);
temp2=getfactorial(r);
temp3=getfactorial(N-r);
res=temp1/(temp2);
//printf("temp1 %d,temp2 %d",temp1,temp2);
result=res%M;
printf("%d\n",result);
}
}
return 0;
}
 
int getfactorial(int number){
int i=2;
int res=1;
int power;
for(;i<=number;i++){
power=pow(i,i);
res=res*power;
}
 
return res;
}
 
int getNr(int N,int r){
int i=(N-r)+1;
int res=1;
int power;
for(;i<=N;i++)
{
power=pow(i,i);
res=res*power;
}
return res;
}
