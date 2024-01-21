#include <stdio.h>
#include<stdlib.h>
int main(){
    int A[100], size;
    int count=0;
    int swapped;

    printf("enter the size of array:");
    scanf("%d",&size);

    printf("Enter the elements: ");
    for(int i=1; i<=size; i++){

        scanf("%d",&A[i]);
    }
    for(int i=1;i<=size-1;i++){
        swapped=0;
        for (int j=1; j<=size-i;j++){
            count++;
            if(A[j]>A[j+1]){
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                swapped=1;
            }        
        }
        if (swapped==0){
            break;
        } 
    }
    printf("After Sorting:");
    for(int i=1; i<=size; i++){ 
        printf(" %d ",A[i]);
    }
    printf("\nNumber of Comparisons: %d", count);
    return 0;
}