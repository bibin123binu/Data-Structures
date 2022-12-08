#include<stdio.h>
int stack[100],choice,i,x,top,n;
void push();
void pop();
void display();
int main()
{ 
top=-1;
printf("size of  the stack[max=50]");
scanf("%d",&n);
printf("\n STACK OPERATION USING ARRAY");
printf("\n 1.push\n2.pop\n3.display\n4.exit");
do{
   printf("\n enter choice");
   scanf("%d",&choice);
   switch(choice){
     case 1:{
     push();
     break;}
    case 2:{
    pop();
     break;}
    case 3:{
   display();
     break;}
    case 4:{
   printf("exit");break;}
   default:{
  printf("\n enter a valid choice");
  }
}
}while(choice!=4);
return 0;
}
void push(){
if(top>=n-1)
{
printf("stack is overflow");
}
else{printf("enter the value to be pushed");
scanf("%d",&x);
top++;
stack[top]=x;
}
}
void pop(){
if(top<=-1){ 
printf("stack is underflow");
}
else{
printf("poped element is %d",stack[top]);
top--;
}
}
void display()
{ 
if(top>=0){

for(i=top;i>=0;i--){
printf("\n %d",stack[i]);}
printf("\n press next choice");
}
else{
printf("\n the stack is empty");
}
}





