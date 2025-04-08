
//Write a Program to perform insertion sort in C. 
int main() {
    int arr[6], i, j, temp;
    
    // Get numbers from user
    printf("Enter 6 numbers:\n");
    for(i = 0; i < 6; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // Insertion Sort
    for(i = 1; i < 6; i++) {
        temp = arr[i];
        for(j = i - 1; j >= 0 && arr[j] > temp; j--) {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = temp;
    }
    
    // Show sorted array
    printf("Sorted numbers: ");
    for(i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}