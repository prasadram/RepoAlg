#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int T;
	int len;
	char strings[1000000];
	int isPalindrome(char *str,int len);
	int chars[26];
	int i=0;
	int result;
	int Add;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%s",strings);
		len=strlen(strings);
		if(isPalindrome(strings,len)==0)
		 printf("%d\n",len);
		else
		{
		  for(i=0;i<26;i++)
		   chars[i]=0;
		  for(i=0;i<len;i++)
		   chars[strings[i]-97]++;
		   Add=0;
		   result=0;
		   for(i=0;i<26;i++)
		   {
		   	if(chars[i]%2==0)
			 result = result+ chars[i];
			else
			if(Add==0)
			{
				Add=1;
			 	result = result+ chars[i];
			}
			if(result==len)
			 break;
		   }
		   printf("%d\n",result);
		}
	}
	return 0;
}
int isPalindrome(char *str,int len)
{	
	char *str1;
 	int i=0;
        int j=len-1;
	str1=malloc(len);
	for(i=0;i<len;i++){
	      	str1[i]=str[j];
		j--;
	}
	str1[len]='\0';
	if(strcmp(str,str1)==0)
	{
	 free(str1);
         return 0;
	}
	else
	{
	 free(str1);
	 return 1;
	}

}
