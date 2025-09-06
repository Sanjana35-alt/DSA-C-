#include<stdio.h>


int countElements(int size){
    return size;
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

    int count = countElements(size);
    printf("Number of elements in the array: %d\n", count);

    return 0;
}