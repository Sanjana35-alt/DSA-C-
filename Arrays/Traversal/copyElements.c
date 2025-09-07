#include<stdio.h>

void copyElements(int arr[], int size){
    int dupArr[size];
    printf("Original array:\n");
    for(int i = 0; i<size; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    printf("Duplicate array:\n");
    for(int i = 0; i<size; i++){
        dupArr[i] = arr[i];
        printf("dupArr[%d] = %d\n", i, dupArr[i]);
    }
    
}


int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array: ");
    for(int i = 0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    copyElements(arr, size);

    return 0;

}