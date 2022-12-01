#include<stdio.h>
void main()
{
int i ,arr[50],n,f;
int key;
printf("enter the size of array");
scanf("%d",&n);
printf("enter the elements in array");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("enter the position to search ");
scanf("%d",&key);
 for(i=0;i<n;i++){

    if(arr[i]==key)
    {
    f=i;
    break;
    }
    else {
    f=-1;
    }
 }
if(f==i)
{printf("element is =%dposition %d=",arr[i],i);
}
else{printf("element not found");}
}

