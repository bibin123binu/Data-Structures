#include<stdio.h>
void main(){
int a[100],n,i,sum=0;
printf("enter the limit");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{ scanf("%d",&a[i]);
sum+=a[i];
}
printf("the sum=%d",sum);
}
