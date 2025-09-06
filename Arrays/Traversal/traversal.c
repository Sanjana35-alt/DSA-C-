#include<stdio.h>

void traversal(int arr[], int size){
    for(int i=0; i<size; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}


int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array: ");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Elements of the array: \n");
    traversal(arr, size);

    return 0;
}