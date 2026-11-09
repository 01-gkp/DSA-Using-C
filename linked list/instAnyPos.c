// #include<stdio.h>
// #include<stdlib.h>


// struct dlist {
//     int num;
//     struct dlist *next , *prev;
// };

// struct dlist *start = NULL;
// struct dlist *node = NULL;
// struct dlist *newnode = NULL;

// void create();
// void display();
// // void insertanyposition();

// int main (){

//     create();
//     display();
//     // insertanyposition();
//     printf("\ndisplay after insert any position a number\n");
//     display();
//     return 0;
// };


// void create(){
//    char  ch = 'y';
//     start = (struct dlist*)malloc(sizeof(struct dlist));
//     start->next = NULL;
//     start->prev = NULL;
//     while(ch =='y' || ch == 'Y'){
//         newnode = (struct dlist*)malloc(sizeof(struct dlist));
//         printf("\nEnter number for new node :");
//          scanf("%d",&newnode->num);
//          newnode->next = NULL;
//          newnode->prev = NULL;

//          if(start->next ==NULL){
//             start->next = newnode;
//             newnode->prev = start;
//          }
//          else{
//             node = start->next;
//             while(node->next !=NULL){
//                 node = node->next;
//             }
//             node->next = newnode;
//             newnode->prev = node;

//          }
          
//          printf("\n Press Y for create  new node :");
//          scanf(" %c",&ch);
//     }


// }



// void display(){
//     node = start->next;
//     while(node != NULL){
//         printf("%d",node->num);
//         if(node->next != NULL){
//             printf("<->");
//         }
//         node = node->next;
//     }
//     printf("->NULL");
// }




#include<stdio.h>
#include<stdlib.h>

struct dlist{
    int num;
    struct dlist *next , *prev;
};

struct dlist *start;
struct dlist *node;
struct dlist *newnode;

void create();
void display();

int main (){

    create();
    display();
    return 0;
};

void create(){

   char ch='y';
    start = (struct dlist*)malloc(sizeof(struct dlist));
    start->next = NULL;
    start->prev = NULL;
    
    while (ch =='y'  || ch =='Y'){
        newnode = (struct dlist*)malloc(sizeof(struct dlist));
        printf("\nEnter number for new node :");
        scanf("%d",&newnode->num);
        newnode->next = NULL;
        newnode->prev =NULL;

        if (start->next ==NULL){
            start->next = newnode;
            newnode->prev = start;

        }
        else{
            node = start->next;
            while(node->next != NULL){
                node = node->next;
            };
            node->next = newnode;
            newnode->prev  = node;
        };
        
        printf("\npress y for create node :");
        scanf(" %c",&ch);

    }
}


void display(){
    node = start->next;
    while(node !=NULL){
        printf("%d",node->num);
        if(node->next !=NULL) printf("<->");
        node = node->next;
    }
    printf("<- NULL");
}




