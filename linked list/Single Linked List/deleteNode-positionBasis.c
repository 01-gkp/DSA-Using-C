// delete desire node on basis of node number in single linked list using C language

#include<stdio.h>
#include<stdlib.h>

struct slist{
    int num;
    struct slist *next;
}*start , *node ,*temp;

void create();
void display();
void deleteNode();

int main(){
    printf("\n================creation node..===================\n");
    create();
    printf("\n================display before node deletion======================\n");
    display();
    deleteNode();
    printf("\n==================display after node deletion=====================\n");
    display();

    return 0;
}



void create(){
    start = (struct slist*)malloc(sizeof(struct slist));
    node = (struct slist*)malloc(sizeof(struct slist));
    start->next = node;
    char ch='c';
    while(ch=='c' || ch=='C'){
        printf("\nEnter number for node creation  :");
        scanf("%d",&node->num);
        node ->next = NULL;
        printf("\nPress c for continue create node :");
        scanf(" %c",&ch);
        if(ch=='c' || ch=='C'){
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


void deleteNode(){
    node = start->next;
    int i =1,position;
    printf("\nEnter node position for delete :");
    scanf("%d",&position);
    while(i < (position - 1)){
        node = node->next;
        i++;
    }
    temp = node->next;
    node->next = node->next->next;
    free(temp);
}