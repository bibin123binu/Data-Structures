#include<stdio.h>
#include<malloc.h>
void main(){
    int value,ch;
  struct node
  {
    /* data */
    int data;
    struct node *next;
  };
  
    struct node *new,*head,*tail;
     new=(struct node*)malloc(sizeof(struct node));
    do
    {
        new=(struct node*)malloc(sizeof(struct node));
        printf("enter a value");
        scanf("%d",&value);
        new ->data=value;
        new ->next=NULL;
        if(head==NULL)
        {
            head=new;
            tail=new;
        }else{
            tail ->next=new;
            tail=new;
        }
        printf("1 to re enter 0 to stop");
        scanf("%d",&ch);
    } while (ch);
    tail=head;
    while(tail !=NULL)
    {
      printf("%d",tail->data);
      tail=tail->next;
    }
}
