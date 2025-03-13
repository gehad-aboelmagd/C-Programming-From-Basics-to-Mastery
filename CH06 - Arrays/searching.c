
// #include<stdio.h>

int linearSearch(int *ptr, int size, int item){
    for(int i=0; i<size; i++){
        if(ptr[i]==item) return i;
    }
    return -1;
}

int binarySearch(int* ptr, int size, int item){
    static int start = 0;
    int end = start + size-1;
    int mid = (start+end)/2;

    // printf("size: %d\n", size);
    // printf("%d %d %d\n", start, mid, end);
        
    if(size<=0){
        return -1;
    }
    else if(item==ptr[mid]){
        return mid;
    }
    else if(item<ptr[mid]){
        end = mid - 1;
    }
    else if(item>ptr[mid]){
        start = mid + 1;
    }
    
    size = end - start + 1;
    binarySearch(ptr, size, item);
}


// void main(){
//     int arr[] = {1, 2, 3, 8, 10, 12, 16};
//     int index = binarySearch(arr, 7, 9);
//     printf("index: %d", index);
// }