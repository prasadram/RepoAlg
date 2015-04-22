/*
 * Problem : CHEFCH
 * Date : 6-2-15
 */
 #include<stdio.h>
 #include<string.h>
 int main()
 {	
 	int T;
	int i,j;
	char ch,ch1,ch2,ch3;
	int count,count1;
	int len;
	int flag,flag1;
	scanf("%d",&T);
	while(T--)
	{
		char str[100001];
		scanf("%s",str);
		len=strlen(str);
		ch=str[0];
		ch2=str[len-1];
		i=1;
		count=0;
		count1=0;
		flag=1;
		flag1=1;
		for(i=1,j=len-2;i<len;i++,j--)
		{
			ch1=str[i];
			ch3=str[j];
			if(flag==0)
			{
				if(ch!=ch1)
				{
				 count++;
				}
				flag=1;
			}
			else
			{
				if(ch==ch1)
				{
			   	  count++;
			 	}
			        flag=0;
			 }
			 if(flag1==0)
			 {
			 	if(ch2!=ch3)
				 count1++;
				flag1=1;
			 }
			 else{
			 	if(ch2==ch3)
				  count1++;
				flag1=0;
			 }
		}
		if(count>count1)
		 printf("%d\n",count1);
		else
		 printf("%d\n",count);
		
	}
 	return 0;
 }
