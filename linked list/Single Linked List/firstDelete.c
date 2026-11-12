// first node delete program in single linked list using c language

#include<stdio.h>
#include<stdlib.h>

struct slist {
    int num;
    struct slist *next;
}*start, *node ;


void create();
void display();
void firstDelete();

int main (){

    printf("\n================== node creation ========================\n");
    create();
    printf("\n====================display before first node deletion================\n");
    display();
    firstDelete();
    printf("\n====================display after first node deletion====================\n");
    display();
    return 0;
};


void create(){
    start = (struct slist*)malloc(sizeof(struct slist));
    node = (struct slist*)malloc(sizeof(struct slist));

    start->next= node;
    char ch='C';
    while(ch=='C' || ch =='c'){
        printf("Enter a number for create node :");
        scanf("%d",&node->num);
        node->next = NULL;
        printf(" press C for continue creation :");
        scanf(" %c",&ch);
        if(ch=='C' || ch =='c'){
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



void firstDelete(){
    node = start->next;
     start->next = node->next;
    free(node);

}