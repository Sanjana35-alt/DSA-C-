#include<stdio.h>


void evenIndeces(int arr[], int size){
    printf("Elements at even indices are:\n");
    for(int i = 0; i<size; i++){
        if(i % 2 == 0){
            printf("arr[%d] = %d\n", i, arr[i]);
        }
    }
}

int main(){
    int size;
    printf("Enter the size of the array:");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array: ");
    for(int i = 0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    evenIndeces(arr, size);

    return 0;
}