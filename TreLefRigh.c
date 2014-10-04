#include<stdio.h>
#include<assert.h>
#include<string.h>
int main()
{
	int T,N;
	assert(scanf("%d",&T)==1);
	int value=1;
	int level=1;
	int flag;
	int len;
	int i;
		while(T--)
		{
		     char str[100001];
		     int mod=1000000007;
		     value=1;
		     level=1;
		     scanf("%s",str);
		     len=strlen(str);
		     for(i=0;i<len;i++) 
		     {
		      //level++;
		      //flag=(level%2);
		      flag=(i%2);
		      if(str[i]=='l' && flag==0)
		      {
		         value=value*2;
		      }
		      else
		      if(str[i]=='l' && flag==1)
		      {
		      	 value=(value*2)-1;
		      }
		      else
		      if(str[i]=='r' && flag==0)
		      {
		         value=(value*2)+2;
		      }
		      else
		      if(str[i]=='r' && flag==1)
		      {
		         value=(value*2)+1;
		      }
		      if(value>=mod)
		       value%=mod;
		     }
		  printf("%d\n",value);
		}
	return 0;
}
