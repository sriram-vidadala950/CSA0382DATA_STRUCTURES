#include<stdio.h>
#include<stdlib.h>
void main()
{
    struct node{
        int data;
        struct node *next;
    };
    struct node *head,*new,*temp;
    head = 0;
    int choice=1;
    while (choice)
    {
    new = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter a nodes..");
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
    while(temp!=0){
        printf(" %d ",temp->data);
        temp = temp->next;
    }
    int n =1;
    while(n){
    new = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter a node at begining..");
    scanf("%d",&new->data);
    new->next = head;
    head  =new;
    printf("\npress 1 to continue or 0 to exit..");
    scanf("%d",&n);
    }
    temp = head;
    while(temp !=0){
        printf(" %d ",temp->data);
        temp =temp->next;
    }
}
