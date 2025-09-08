#include<stdio.h>
#include<stdlib.h>


void traversal(int arr[], int n){
    printf("Elements of array are:\n");
    for(int i = 1; i <= n; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    printf("\n");
}

void deletionByIndex(int arr[], int *n, int index){
    if(*n == 0){
        printf("Error: Array underflow! No elements to delete.\n");
    }
    else if(index < 0 || index >= *n){
        printf("Note: Deletion can't be performed as the index is invalid.\n");
    }
    else{
        for(int i = index; i < *n; i++){
            arr[i] = arr[i+1];
        }
        (*n)--;
        printf("Element at index %d deleted successfully.\n", index);
    }
}

int main(){
    int max_size;
    printf("Enter the size of the array: ");
    scanf("%d", &max_size);

    int arr[max_size];
    int n;
    printf("How many elements do you want to enter for now? ");
    scanf("%d", &n);

    if(n > max_size){
        printf("Note: You can't insert more than %d elements. Setting size to %d.\n", max_size, max_size);
        n = max_size;
    }

printf("Enter the elements of the array:\n");
    for(int i = 1; i <= n; i++){
        scanf("%d", &arr[i]);
    }
   
    traversal(arr, n);

    printf("Do you want to delete any item from the array? (enter Y for yes and N for no): ");
    char d_index;
    scanf(" %c", &d_index);

    if(d_index == 'Y' || d_index == 'y'){
        int index;
        printf("Enter the index at which you want to delete the element: ");
        scanf("%d", &index);
        deletionByIndex(arr, &n, index);
        printf("After deletion, ");
        traversal(arr, n);
    }
    else{
        printf("Okay, no problem. Exiting the program.\n");
    }


    return 0;
}