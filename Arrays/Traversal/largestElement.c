#include<stdio.h>

void largestElement(int arr[], int size){
    int largest = arr[1];
    int largestElementIndex = 1;
    printf("Array elements are:\n");
    for(int i = 1; i <= size; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
        if(arr[i] > largest){
            largest = arr[i];
            largestElementIndex = i;
        }
    }
    printf("\nLargest element:\narr[%d] = %d\n", largestElementIndex, largest);
}

int main(){
    int size;
    printf("Enter the size of the elements: ");
    scanf("%d", &size);

    int arr[size];
    for(int i = 1; i <= size; i++){
        scanf("%d", &arr[i]);
    }
    largestElement(arr, size);

    return 0;
}