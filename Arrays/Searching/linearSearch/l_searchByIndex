#include<stdio.h>


void traverse(int arr[], int n){
    printf("Array elements are:\n");
    for(int i = 0; i<n; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}

void l_searchByItem(int arr[], int n, int item){    
    int loc = -1;
    for(int i = 0; i<n; i++){
        if(arr[i] == item){
            loc = i;
            break;
        }
    }
    if(loc != -1){
        printf("Element found at index: %d\n", loc);
    }else{
        printf("Element not found\n");
    }

}


int main(){
    int max_size, item;
    printf("Enter the size of array: ");
    scanf("%d",&max_size);

    int arr[max_size];
    int n;
    printf("Enter the elements of array: ");
    scanf("%d",&n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    traverse(arr, n);

    
    printf("Enter the element to be searched: ");
    scanf("%d",&item);
    l_searchByItem(arr, n, item);

    return 0;
}