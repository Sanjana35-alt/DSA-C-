#include<stdio.h>



void evenNumCount(int arr[], int size){
    printf("Even elements are: \n");
    for(int i = 0; i<size; i++){
        if(arr[i] % 2 == 0){
            printf("arr[%d] = %d\n", i, arr[i]);
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
        scanf("%d", &arr[i]);
    }

    evenNumCount(arr, size);

    return 0;
}