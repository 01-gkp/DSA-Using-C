//last node delete program in Double Linked link list

#include<stdio.h>
#include<stdlib.h>

struct dlist{
    int num;
    struct dlist *next,*prev;
};

struct dlist *start = NULL;
struct dlist *node = NULL;
struct dlist *newNode = NULL;


void create();
void display();
void lastDelete();


int main (){

    printf("\n=====================node creation ==================================\n");
    create();
    printf("\n=====================display before last node deletion ==================\n");
    display();
    lastDelete();
    printf("\n=======================display after last node deletion====================\n");
    display();

    return 0;
};


void create(){
    start = (struct dlist*)malloc(sizeof(struct dlist));
    char ch ='c';
    start->next = NULL;
    while(ch =='c' || ch =='C'){
        newNode = (struct dlist*)malloc(sizeof(struct dlist));
        printf("\nEnter number for node creation :");
        scanf("%d",&newNode->num);
        newNode->next = NULL;
        newNode->prev = NULL;
        if(start->next ==NULL){
            start->next = newNode;
            newNode->prev = start;
        }
        else{
            node = start->next;
            while(node->next !=NULL){
                node = node->next;
            }
             node->next =newNode;
            newNode->prev = node;

        };
        printf("\nPress C for continue creation :");
        scanf(" %c",&ch);


    }
}

void display(){
    node = start->next;
    while(node !=NULL){
        printf("%d",node->num);
        if(node->next !=NULL) printf("<-->");
        node = node->next;
    };
    printf("<-->NULL\n");

}


void lastDelete(){
    node = start->next;
    while(node->next !=NULL){
        node = node->next;
    }
    node->prev->next = NULL;
    free(node);
}