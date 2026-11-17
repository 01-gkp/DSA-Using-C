// Program to create and Traverse the Circular Single Linked list 

#include<stdio.h>
#include<stdlib.h>

struct slist {
    int num;
    struct slist *next;
}*start , *node;

void create();
void display ();

int main (){
    printf("\n=====================node creation========================================\n");
    create();
    printf("\n======================display content =====================================\n");
    display();
}


void create(){
    char ch ='c';
    start = (struct slist*)malloc (sizeof(struct slist));
    node = (struct slist*)malloc(sizeof(struct slist));

    start->next = node;
    while(ch=='c' || ch=='C'){
        printf("\nEnter number for node Creation :");
        scanf("%d",&node->num);
        node->next = start->next;
        printf("\nPress c for continue creation :");
        scanf(" %c",&ch);
        if(ch=='c' || ch=='C'){
            node->next = (struct slist*)malloc(sizeof(struct slist));
            node = node->next;
        }

    }
}


void display(){
    node = start->next ;
    while(node->next != start->next){
        printf("%d\t\t",node->num);
        node = node->next;
    }
}