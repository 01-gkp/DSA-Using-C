#include<stdio.h>



int main (){

    int a[100],n, temp;

        // Creating Array 

        printf("\nEnter the total number of Array :");
        scanf("%d",&n);

        printf("\nEnter number for creating array :\n");
        for (int i = 0 ; i<n ; i++){
            printf("%d element is  :",i+1);
            scanf("%d",&a[i]);
        }

        //Bubble sort 

        for (int i =0 ; i<n-1 ; i++ ){
            int flag = 0;
            for (int j =0 ; j<n-1-i ; j++){
                if(a[j] > a[j+1]){ 
                    int temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp ;

                    flag = 1;
                }
            }
            if ( flag == 0) break;
        }

        // printf Array in Asending order 

        printf("\n============================Array in asending======================================\n");
        for (int i = 0; i<n; i++){
            printf("%d\t",a[i]);
        }

}
