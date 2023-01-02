#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
    /* data */
    int data;
    struct node*next;
}*head,*new,*tail,*prenode,*nextnode;
void beg();
void end();
void pos();
void display();
void delbeg();
void delend();
void delpos();
int value;
void beg(){
    new=(struct node*)malloc(sizeof(struct node));
    printf("insert a value=");
    scanf("%d",&value);
    new->data=value;
    new->next=head;
    head=new;
    printf("inserted");

}
void end(){
    new=(struct node*)malloc(sizeof(struct node));
    printf("insert a value=");
    scanf("%d",&value);
    tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }  
    new->data=value; 
    tail->next=new;
    printf("inserted......");    
}
void pos(){
    int pos,i;
    printf("insert a pos=");
    scanf("%d",&pos);
     tail=head;
    while(i<pos){
       tail=tail->next;i++;  
    } 
    new=(struct node*)malloc(sizeof(struct node));
    printf("insert a value=");
    scanf("%d",&value);
    new->data=value;
    new->next=tail->next;
    tail->next=new;
    printf("inserted..........");
}
void display(){
    tail=head;
    while(tail !=NULL){
        printf("%d",tail->data);
        tail=tail->next;
    }
}
void delbeg(){
    tail=head;
    if(head==0){
        printf("not element to delete");
    }
    else{
        head=head->next;
    }free(tail);
}
void delend(){
    tail=head;
    while(tail->next!=NULL){
        prenode=tail;
        tail=tail->next;
    }
    prenode->next=NULL;
    free(tail);

}
void delpos(){
    int pos,i;
    printf("enter position =");
    scanf("%d",&pos);
    tail=head;
    while(i<pos-1){
        tail=tail->next;
        i++;
    }
    nextnode=tail->next;
    tail->next=nextnode->next;
    free(nextnode);
}
void main(){
      int choice =0;  
    while(choice != 9)   
    {  
        printf("\n\n*********Main Menu*********\n");  
        printf("\nChoose one option from the following list ...\n");  
        printf("\n===============================================\n");  
        printf("\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Show \n5.del beg\n6.del last\n7.del pos\n8.Exit\n");  
        printf("\nEnter your choice?\n");         
        scanf("\n%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            beg();      
            break;  
            case 2:  
            end();         
            break;  
            case 3:  
            pos();       
            break;   
            case 4:  
            display();        
            break; 
            case 5:  
            delbeg();       
            break;   
            case 6:  
            delend();        
            break; 
            case 7:  
            delpos();        
            break;   
            case 8:  
            exit(0);  
            break;  
            default:  
            printf("Please enter valid choice..");  
        }  
    }  
}

