#include<stdio.h>

void oddIndeces(int arr[], int size){
    printf("Elements at odd indeces: ");
    for(int i = 0; i<size; i++){
        if(i % 2 != 0){
            print("arr[%d] = %d", i, arr[i]);
        }
    }
}

int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array: ");
    for(int i = 0; i<size; i++){
        scanf("%d", &arr);
    }

    oddIndeces(arr, size);

    return 0;
}