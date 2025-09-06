#include<stdio.h>


void traversal(int arr[], int size){
    printf("{");
    for(int i = 0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("}");
}


void smallestElement(int arr[], int size){
    int smallest = arr[0];
    for(int i = 1; i<size; i++)
    {
        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    printf("%d", smallest);
}


int main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array: ");
    for(int i = 0; i<size; i++){
        scanf("%d", &arr[i]);
    }


    printf("Array = ");
    traversal(arr, size);

    printf("\nSmallest element = ");
    smallestElement(arr, size);

    return 0;
}