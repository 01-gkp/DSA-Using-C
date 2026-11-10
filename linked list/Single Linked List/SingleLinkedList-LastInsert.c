// Insert a new node in last POsition in Single Linked List using C language .

#include<stdio.h>
#include<stdlib.h>

struct slist {
    int num;
    struct slist *next;
}*start , *node , *newNode;

void create();
void display();
void lastInsert();


int main (){

printf("\n================node creation..=================\n");
create();
printf("\n=================display before last insertion =====================\n");
display();
lastInsert();
printf("\n====================display after last insertion =========================\n");
display();

    return 0;
};

void create(){
    start = (struct slist*)malloc(sizeof(struct slist));
    node = (struct slist*)malloc(sizeof(struct slist));
    start->next = node;
    char ch = 'c' ;
    while(ch=='c' || ch=='C'){
        printf("\nEnter a number for creating nodes :");
        scanf("%d",&node->num);
        node->next = NULL;
        printf("\nPress C button for continue creation ");
        scanf(" %c",&ch);
        if(ch=='c' || ch =='C'){
            node->next = (struct slist*)malloc(sizeof(struct slist));
            node = node->next;
        }

    }
}


void display(){
    node = start->next;
    while(node !=NULL){
        printf("%d\t\t",node->num);
        node = node->next;
    }
}


void lastInsert(){
    node = start->next;
    newNode = (struct slist*) malloc(sizeof(struct slist));
    printf("\nEnter a number for last insert ");
    scanf("%d",&newNode->num);
    while(node->next !=NULL){
        node = node->next;
    }
    node->next = newNode;
    newNode->next = NULL;

}
