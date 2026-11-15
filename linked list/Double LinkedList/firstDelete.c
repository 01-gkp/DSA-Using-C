// first node delete program in Double Linked list 

#include<stdio.h>
#include<stdlib.h>

struct dlist {
    int num;
    struct dlist *next , *prev;
};

 struct dlist *start = NULL;
 struct dlist *node = NULL;
 struct dlist *newnode = NULL;


 void create();
 void display();
 void firstDelete();

 int main (){
    printf("\n===================== node creation=========================\n");
    create();
    printf("\n=====================display list before deletion=========================\n");
    display();
    firstDelete();
    printf("\n=====================display list after deletion=========================\n");
    display();
    return 0;
 };



void create(){
 char ch ='c';
 start = (struct dlist *) malloc (sizeof(struct dlist));
 start ->next = NULL;
 start ->prev=NULL;
 while(ch =='c' || ch =='C'){
 newnode = (struct dlist *)malloc(sizeof(struct dlist));
 printf("\nEnter number for new node :");
 scanf("%d",&newnode->num);
 newnode->next = NULL;
 newnode->prev= NULL;
 if(start->next == NULL){
    start->next = newnode;
    newnode->prev = start;
 }
 else{
    node = start->next;
    while(node->next !=NULL){
        node = node->next;
    }
    node->next = newnode;
    newnode->prev = node;
 }
 printf("\nPress C for create list : ");
 scanf(" %c",&ch);
 }
}



void display(){
    node = start->next ;
    while(node !=NULL){
        printf("%d",node->num);
        if(node->next !=NULL){
            printf("<-->");
        };
        node  = node->next;
    }
    printf("->NULL ");
};



 void firstDelete(){
    node = start->next;
    node->next->prev = NULL;
    start->next = node->next;
    free(node);
 }