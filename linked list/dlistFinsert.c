#include<stdio.h>
#include<stdlib.h>

struct dlist {
    int num;
    struct dlist *next , *prev ;
};
struct dlist *start = NULL;
struct dlist *node = NULL;
struct dlist *newnode = NULL;

void create();
void display();
void insertFirst();

int main (){
    create();
    printf("\nDisplay created list :");
    display();
    insertFirst();
    printf("\nDisplay after First insert :");
    display();
    return 0;
};


void create(){
    char ch ='y';
    start = ( struct dlist *)malloc(sizeof(struct dlist));
    start -> next = NULL;
    start -> prev = NULL;
    while(ch =='y' || ch =='Y'){
        newnode = (struct dlist*)malloc(sizeof(struct dlist));
        printf("\nEnter number for new node :");
        scanf("%d",&newnode->num);
        newnode->next = NULL;
        newnode->prev = NULL ;
        if ( start ->next == NULL){
            start ->next = newnode;
            newnode->prev = start;
        }
        else {
            node = start->next ;
            while(node->next !=NULL){
                node = node->next;
            }
            node->next = newnode;
            newnode->prev = node;

        }
        
                printf("\npress Y for create new node :");
                scanf(" %c",&ch);
    }


}



void display(){
    node = start ->next ;
    while(node != NULL){
        printf("%d",node->num);
        if(node->next !=NULL){
            printf("<-->");
        }
        node = node->next;
    }
    printf(" -> NULL \n");
}



void insertFirst(){
    node = start ->next;
   newnode = (struct dlist*)malloc(sizeof(struct dlist));
    printf("\nEnter number for new node :");
    scanf("%d",&newnode->num);

    if(node == NULL){
        start->next = newnode;
        newnode->prev = start;
        newnode->next = NULL;
    }
    else {
        newnode->next = node;
        node->prev = newnode;

        start->next = newnode;
        newnode->prev = start;
    }

}





// cmd = & "E:\dsa.c\linked list\dlistFinsert.exe"