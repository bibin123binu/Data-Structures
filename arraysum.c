#include<stdio.h>
void main()
{
int arr[10],i,n,sum=0;
printf("enter the size of array");
scanf("%d",&n);
printf("enter the element of array");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
sum=sum+arr[i];
}
printf("the sum is%d",sum);
} 
