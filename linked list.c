#include<stdio.h>
#include<stdlib.h>
void main()
{
    struct node{
        int data;
        struct node *next;
    };
    struct node *head,*temp,*new;
    head = 0;
    int choice;
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
        printf("\nPress 1 to contiune or 0 to end..");
        scanf("%d",&choice);
    }
    temp = head;
    while(temp!=0){
        printf(" %d ",temp->data);
        temp = temp->next;
    }
}
