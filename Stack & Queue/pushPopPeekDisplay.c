// Push , Pop , Peek , Display all function in Stack using c Language

#include<stdio.h>
#include<conio.h>

int a[10] , top = -1;

void push();
void pop();
void peek();
void displayAll();

int main (){

    int choice ;
    while(1){
        printf("\n=====================Press According to you ================================\n 1--> Push \n 2-->Pop \n 3--> Peek  \n 4--> Display All \n5--> Break");
        printf("\nEnter your Choice : ");
        scanf("%d",&choice);

        if(choice == 1) push();
        else if (choice == 2){ 
            pop();
                 }
        else if (choice ==3) {
            peek();
         }
        else if(choice==4) displayAll();
        else if (choice == 5) break;
        else 
            printf("\n Invalid choice !! Please try again ");
    }
    return 0;
}

void push(){
    if(top == 9){
        printf("\n Stack is overFlow ");
        return ;
    }
    else{
        printf("\n Enter Value for insert : ");
        scanf("%d",&a[++top]);
    }
}

void pop(){
    if(top == -1){
        printf("\nStack underFlow So you can't pop element ");
    }
    else {
        printf("\n poped Item : %d",a[top]);
        top--;
        printf("\n pop successfully \n");

    }
}

void peek(){
    if(top == -1){
        printf("\n Stack in UnderFlow ");
    }
    else{
        printf("\n peek element is : %d",a[top]);
    }
}


void displayAll(){
    if(top == -1){
        printf("\n Stack is UnderFlow ");
    }
    else {
        for(int i = top ; i>=0;i--){
            printf("%d\n",a[i]);
        }
    }
}