
// First Insert Program in Sinlge Linked List using C language  

#include<stdio.h>
#include<stdlib.h>

struct Slist {
    int num;
    struct Slist* next ; 
}*start , *node , *newNode;

void Create();
void Display();
void FirstInsert();

int main (){

printf("\n===============Create Single Linked List==============\n");
Create();
printf("\n================Display Before First Insert===============\n");
Display();
printf("\n=================First insertion ===========================\n");
FirstInsert();
printf("\n==================Display after First Insert================\n");
Display();
    return 0;
}


void Create(){
    start = (struct Slist*) malloc(sizeof(struct Slist));
    node = (struct Slist*) malloc(sizeof(struct Slist));
    start->next = node ;
    char ch = 'c';
    while(ch=='c' || ch =='C'){
        printf("\nEnter a number for insert in node :");
        scanf("%d",&node->num);
        node->next = NULL;
        printf("\nPress button C for continue inserting :");
        scanf(" %c",&ch);
        if(ch=='c' || ch =='C'){
            node->next = (struct Slist*) malloc(sizeof(struct Slist));
            node = node->next;
        }
    }
}

void Display(){
     node =  start->next ;
    while(node->next != NULL){
        printf("%d\t\t",node->num);
        node = node->next ;
    }
    printf("%d",node->num);
}

void FirstInsert(){
    node = start->next;
    newNode = (struct Slist*)malloc (sizeof(struct Slist));
    printf("\nEnter number for insert first position :");
    scanf("%d",&newNode->num);
    newNode->next = node;
    start->next = newNode;

}
