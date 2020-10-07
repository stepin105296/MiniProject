#include <stdio.h>

int sort(int*);

int n;

int main(){
    printf("Enter total no. of elements\n");
    scanf("%d", &n);
    int arr[n];
    int *ptr = arr;
    printf("Enter array elements\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    sort(ptr);
    printf("Sorted array:\n");
    for(int i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}

int sort(int *ptr){
    int temp;
    for(int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if(*(ptr+j) < *(ptr+i)){
                temp = *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = temp;
            }
        }
    }
    return 0;
}

