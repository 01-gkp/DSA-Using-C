// Insertion Sort Algorithms using c language 

#include<stdio.h>

int main (){

    int n;


    //input an Array 
    printf("\nEnter total number of Array :");
    scanf("%d",&n);

    int a[n];

    printf("\n========Enter Array ===========");
    for (int i =0;i<n ; i++){
        printf("\n%d position number is :",i+1);
        scanf("%d",&a[i]);
    }


    // Insortion sort 

    for (int i =1;i<n;i++){
        int temp = a[i];
        int j = i-1;

        while(j>=0 && a[j] > temp){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }


    //print in Asending order
    printf("\n =====================Array in Asending order=========================\n");
    for (int i=0;i<n;i++){
        printf("%d\t",a[i]);
    } 


    return 0;

}