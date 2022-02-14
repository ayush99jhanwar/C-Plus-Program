#include<stdio.h>
#include<string.h>
void main()
{
	int len,i=0,flag;
	scanf("%d",&len);
	char a[len];
	scanf("%s",a);
	do
{
	for(i=0;i<len-1;)
	{
		flag=0;
		if(a[i]==a[i+1])
		{
			flag=1;
			for(int j=i;j<len-2;j++)
			a[j]=a[j+2];
			len=len-2;
		}
		
		else
			
			i++;	
	}
		a[len]='\0';
}while(flag==1 && len>0);
if(len!=0)
	printf("%s",a);
else
	printf("Empty String");
}