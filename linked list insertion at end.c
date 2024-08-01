#include<stdio.h>
#include<stdlib.h>
void main()
{
    struct node{
        int data;
        struct node *next;
    };
    struct node *head,*temp,*new;
    int choice = 1;
    head = 0;
    while(choice){
    new = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter a node : ");
    scanf("%d",&new->data);
    new->next = 0;
    if(head == 0){
        head = temp = new;
    }else{
        temp->next = new;
        temp = new;
    }
    printf("\npress 1 to contiune or 0 to exit..");
    scanf("%d",&choice);
    }
    temp = head;
    while (temp!=0)
    {
       printf(" %d ",temp->data);
       temp = temp->next;
    }
    int n=1;
    while(n){
    new = (struct node*)malloc(sizeof(struct node));
    printf("\nInsert a node at last..");
    scanf("%d",&new->data);
    new->next = 0;
    temp = head;
    while (temp->next!=0)
    {
        temp = temp->next;
    }
    temp->next = new;
    printf("\npress 1 to contiune or 0 to exit..");
    scanf("%d",&n);
    }
    temp = head;
    while(temp!=0){
        printf(" %d ",temp->data);
        temp = temp->next;
    }
}
