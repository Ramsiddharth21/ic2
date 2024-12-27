#include <stdio.h>


int removeDuplicates(int arr[], int n) {
    if (n == 0) return 0;


    int index = 1; // Points to the next unique position
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            arr[index++] = arr[i];
        }
    }
    return index;
}


int main() {
    int n;


    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);


    if (n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }


    int arr[n];
    printf("Enter %d sorted integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    int newLength = removeDuplicates(arr, n);


    printf("Number of unique elements: %d\n", newLength);
    printf("Updated array: ");
    for (int i = 0; i < newLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");


    return 0;
}