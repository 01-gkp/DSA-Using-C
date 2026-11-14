// Delete Last node in Single Linked list 

#include<stdio.h>
#include<stdlib.h>

struct slist{
    int num;
    struct slist *next;
}*start , *node ,*temp;

void create();
void display();
void lastDelete();

int main (){

    printf("\n====================node creation====================\n");
     create();
     printf("\n===================display before last delete=========================\n");
     display();
     lastDelete();
     printf("\n=================display after last delete======================\n");
     display();
    return 0;
};


void create(){
    start = (struct slist*)malloc(sizeof(struct slist));
    node = (struct slist*) malloc(sizeof(struct slist));
    start->next = node;
    char ch = 'c';
    while(ch=='c' || ch=='C'){
        printf("\nEnter no for create node :");
        scanf("%d",&node->num);
        node->next = NULL;
        printf("\nPress C for continue creation :");
        scanf(" %c",&ch);
        if(ch=='c' || ch=='C'){
            node->next = (struct slist*)malloc(sizeof(struct slist));
            node = node->next;
        }
    }

}

void display(){
    node = start->next;
    while (node !=NULL)
    {
        printf("%d\t\t",node->num);
        node = node->next;
    }
    
}


void lastDelete(){
    node = start->next;
    while(node->next->next !=NULL){
        node = node->next;
    }
    temp = node->next;
    node->next = NULL;
    free(temp);

}