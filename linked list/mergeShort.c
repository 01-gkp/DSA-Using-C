#include<stdio.h>

void merge (int arr[] , int left , int mid , int right){
    int i =left ;
    int j = mid +1;
    int k = 0;
    int temp[100];

    while(i<=mid && j<=right){
        
        if(arr[i] <= arr[j]){
            temp[k] = arr[i];
            i++;
            k++;
        }
        else {
            temp[k] = arr[j];
            j++;
            k++;
        };
    };
     while( i <=mid){
        temp[k] = arr[i];
        i++;
        k++;
     };
     while(j <= right){
        temp[k] = arr[j];
        j++;
        k++;
     };

     for ( i=left , k=0 ; i<=right ; i++,k++){
 arr[i] = temp[k];
}
};


void mergeShort ( int arr[] , int left , int right){
    if ( left < right){
     int mid = (left + right)/2;
     mergeShort(arr , left , mid);
     mergeShort(arr ,mid+1 ,right );
     merge(arr , left , mid , right);
    };
};



int main () {

    int arr[] = {200,4,345,5,78};
    int n = 5;
    mergeShort( arr , 0 , n-1);
     printf("=====shorted Array ========\n");

     for ( int i=0 ; i<n ; i++){
        printf("%d\t",arr[i]);
     };

    
    return 0;
}























