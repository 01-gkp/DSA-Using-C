// Selection sort Algorithm using c language

#include<stdio.h>

int main(){

    //  Input an Array
        int n;
        printf("\nEnter total number of An Array :");
        scanf("%d",&n);

        int a[n];
        printf("\n===============Array creation ====================\n");
        for (int i =0;i<n;i++){
            printf("%d position number is :",i+1);
            scanf("%d",&a[i]);
        }
        printf("\nArray is : ");
        for(int i=0;i<n;i++){
            printf("%d\t",a[i]);
        }




        // selection sort 

        for (int i=0;i<n;i++){
            int min = i;
            for (int j = i+1;j<n;j++){
                if(a[j] < a[min]) min = j;
            }

            if(min !=i){
                int temp = a[i];
                a[i] = a[min];
                a[min] = temp;
            }
        }




        //print Array in asending order 

        printf("\n===================Array in asending order after selection sort=================\n");
        for(int i=0 ; i<n;i++){
            printf("%d\t",a[i]);
        }
    return 0;
}