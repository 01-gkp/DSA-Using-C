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
 void insertLast();

 int main (){
    create();
    printf("\nDisplay created list ");
    display();
    insertLast();
    printf("\nDisplay after last insert :: \n");
    display();
    return 0;
 };



void create(){
 char ch ='y';
 start = (struct dlist *) malloc (sizeof(struct dlist));
 start ->next = NULL;
 start ->prev=NULL;
 while(ch =='y' || ch =='Y'){
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
 printf("\nPress Y for create list : ");
 scanf(" %c",&ch);
 }
}



void display(){
    node = start->next ;
    while(node !=NULL){
        printf("%d",node->num);
        if(node->next !=NULL){
            printf(" \t<-->");
        };
        node  = node->next;
    }
    printf("->NULL \n");
};



void insertLast(){

    newnode = (struct dlist *)malloc(sizeof(struct dlist));
    printf("Enter value for last node ");
    scanf("%d",&newnode->num);
    newnode->next = NULL;
    node = start ->next;

    if ( node == NULL){
        start ->next = newnode;
        newnode->prev = start;
    }
    else{
    while(node->next !=NULL){
        node = node->next;
    };
    node->next = newnode;
    newnode->prev = node;
    
}

}