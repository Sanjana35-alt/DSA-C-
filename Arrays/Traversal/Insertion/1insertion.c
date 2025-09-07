#include<stdio.h>
#include<stdlib.h>


void traversal(int arr[], int n){
    printf("Elements of array are:\n");
    for(int i = 0; i < n; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    printf("\n");
}

void insertAtIndex(int arr[], int *n, int index, int item, int max_size){
    if(*n >= max_size){
        printf("Note: Array is full, can't insert any element.");
    }
    else if(index < 0 || index > *n){
        printf("Note: Invalid index, can't insert at this index.");
    }
    else{
        for(int i = *n; i > index; i--){
            arr[i] = arr[i-1];
        }
        arr[index] = item;
        (*n)++;

        printf("Item (%d) inserted at index %d.\n", item, index);
    }

}

int main(){
    int max_size;
    printf("Enter the size of the array: ");
    scanf("%d", &max_size);


    int arr[max_size];


    printf("Enter how many elements you want to insert (max %d): ", max_size);
    int n;
    scanf("%d", &n);
    if(n > max_size){
        printf("Note: You can't insert more than %d elements. Setting size to %d.\n", max_size, max_size);
        n = max_size;
    }

    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    traversal(arr, n);

    
    printf("Do you want to insert any item in the array? (enter Y for yes and N for no): ");
    char insert;
    scanf(" %c", &insert);

    if(insert == 'Y' || insert == 'y'){
        if(n == max_size){
            printf("Note: Array is full, can't insert any element.\n");
        }
        else{
            int index;
            printf("Enter the index where you want to insert the item (0 to %d): ", n);
            scanf("%d", &index);
            
            if(index < 0 || index > n){
            printf("Invalid index, can't insert at this index.\n");
            }
            else {
                int item;
                printf("Enter the item you want to insert: ");
                scanf("%d", &item);
                insertAtIndex(arr, &n, index, item, max_size);
                printf("\n");
                traversal(arr, n);
            }
        
        }
    }
    else{
        printf("No insertion as per your requirement.");
    }
    

    return 0;
}