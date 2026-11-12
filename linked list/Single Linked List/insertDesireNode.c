// Insert Desire Node on the basis of node number in Single Linked list

#include<stdio.h>
#include<stdlib.h>

struct slist{
    int num;
    struct slist *next;
}*start , *node, *newNode;

void create();
void display();
void insertDesireNode();

int main (){

    printf("\n==========================creation node..=======================\n");
    create();
    printf("\n=========================display node before insertion ================\n");
    display();
    printf("\n====================display after node insertion ===================\n");
    insertDesireNode();
    display();

    return 0;
};

void create(){
    start = (struct slist*)malloc(sizeof(struct slist));
    node = (struct slist*)malloc(sizeof(struct slist));
    start->next = node;
    char ch='c';
    while(ch=='c' || ch=='C'){
        printf("\nEnter number for creating nodes :");
        scanf("%d",&node->num);
        node->next = NULL;
        printf("\nPress c for continue node creation..:");
        scanf(" %c",&ch); 
        if(ch=='c' || ch=='C'){
            node->next = (struct slist*)malloc(sizeof(struct slist));
            node = node->next;

        }

    }

}

 void display(){
    node = start->next;
    while(node != NULL){
        printf("%d\t\t",node->num);
        node = node->next ;
    }
 }


 void insertDesireNode(){
    newNode = (struct slist*)malloc(sizeof(struct slist));
    node = start->next;
    int i = 1,p;
    printf("\nEnter number for insert new node :");
    scanf("%d",&newNode->num);
    printf("\nEnter position where insert node :");
    scanf("%d",&p);
    while (i < (p-1))
    {
        node = node->next;
        i++;
    }

    newNode->next = node->next;
    node->next = newNode;
    
 }