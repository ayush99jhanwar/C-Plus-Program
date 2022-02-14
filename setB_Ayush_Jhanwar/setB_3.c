#include<stdio.h>
#include<string.h>
void reverseBit(int);
void main()
{
	int n;
	scanf("%d",&n);
	reverseBit(n);
}
void reverseBit(int n)
{
	int arr[20];
	for(int i=0;n>0;i++){
	arr[i]= n%2;
	n/=2;
	}
	printf("Before:");
	for(int i=3;i>=0;i--)
	{
	printf("%d",arr[i]);
	}
	printf("After:");
	for(int i=0;i<4;i++){
	printf("%d",arr[i]);
	}
}