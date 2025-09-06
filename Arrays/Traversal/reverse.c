#include<stdio.h>
#include<stdlib.h>

void traversal(int arr[], int size){
    for(int i=0; i<size; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}

void reverse(int arr[], int size){
    int start = 0;
    int end = size-1;
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
    for(int i=0; i<size; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}


int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int *arr = (int *)malloc(sizeof(int));
    if(arr == NULL){
        printf("Memory not allocated.\n");
        return 1;
    }

    printf("Enter the elements of the array: ");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Elements of the array: \n");
    traversal(arr, size);

    printf("Reversed:\n");
    reverse(arr, size);

    return 0;
}