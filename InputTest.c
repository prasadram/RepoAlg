/*
 * name : Enomous input Test
 */
#include<stdio.h>
int main(){
int n;
int k;
int counter=0;
int i;
int temp;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&temp);
if(temp%k==0)
counter++;
}
printf("%d\n",counter);
return 0;
}
