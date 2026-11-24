// push , pop , peek , display function in single Linked List in Stack 

#include<stdio.h>
#include<stdlib.h>

struct stack{
    int num;
    struct stack *next;
}*start = NULL;

void push();
void pop();
void peek();
void display();


int main (){

    int choice ;
    while(1){
        printf("\n===============Enter your choice ==================================\n1---->push\n2---->pop\n3---->peek\n4---->display\n5---->break\n");
        printf("Enter your choice :");
        scanf("%d",&choice);

        if(choice==1) push();
        else if(choice ==2)pop();
        else if (choice ==3) peek();
        else if (choice == 4) display();
        else if (choice == 5) break;
        else printf("\nWrong choice !! Please try again Later ");
    }

    return 0;
}

void push (){
    struct stack *temp ;
    temp = (struct stack*)malloc(sizeof(struct stack));
    
    printf("\nEnter number for insert :");
    scanf("%d",&temp->num);
    temp->next = start;
    start = temp;
    printf("\nElement successfully push ");
}


void pop(){
    
    struct stack *temp;
    temp = start;
    if (temp == NULL){
        printf("\n Stack is underFlow !! Please Push the value ,First");
    }
    start = start->next;
    printf("\nPop Item :%d",temp->num);
    free(temp);
    printf("\nItem poped Sucessfully");

}


void peek (){
    struct stack *temp;
    temp = start;
    if (temp == NULL) printf("\n Stack in underFLow !!");
    printf("\nPeek Item is : %d",temp->num);
}


void display(){
    struct stack *temp;
    temp = start;
    if(temp == NULL) printf("\nStack is underFLow !!");
    while(temp != NULL){
        printf("%d\n",temp->num);
        temp = temp->next;
    }

}