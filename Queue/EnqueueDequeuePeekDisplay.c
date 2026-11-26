// Enqueue , dequeue , peek and display function in Queue using Array method 

 #include<stdio.h>

    int a[10], front = -1 , rear = -1;


 void Enqueue();
 void dequeue();
 void peek();
 void display();

int main (){
    int choice ;
    while(1){
        printf("\n======================= function chart =============================\n");
        printf("1----->Enqueue\n2----->dequeue\n3-----peek\n4-----display\n5----->Exit ....:");
        printf("\nPlease enter your choice :");
        scanf("%d",&choice);
        if(choice == 1) Enqueue();
        else if (choice ==2 ) dequeue();
        else if(choice ==3 )peek ();
        else if (choice == 4 )display();
        else if (choice == 5) break;
        else printf("\nInvalid choice !! Please try again .....");
    }
 }

 void Enqueue(){
    if (rear == 9)printf("\nQueue is OverFlow !!!");
    else if (front == -1 && rear == -1){
        front = 0;
        rear = 0;
        printf("\nEnter number for insert :");
        scanf("%d",&a[rear]);
        printf("\nEnqueue successfully ");
    }
    else {
        rear ++;
        printf("\nEnter value for insert :");
        scanf("%d",&a[rear]);
    }
 }


 void dequeue(){
    if (front == -1 || rear < front )printf("\nqueue is underflow !!");
    else if (front > rear ) printf("\nQueue is Empty !!!");
    else {
        printf("\ndequeue item : %d",a[front]);
        front++;
        printf("\nDequeue operation successfully ..... ");
    }
 }

 void peek(){
    if (front == -1 || rear < front ) printf("\nQueue is underFlow ");
    else {
        printf("\nPeek item is : %d",a[front]);
    }
 }


 void display (){
        if (front == -1 || rear < front) printf("\nQueue is underFlow ");
        else {
            for ( int i= front ; i<=rear;i++){
                printf("%d\t",a[i]);
            }
        }
 }
