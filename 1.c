#include <stdio.h>


int removeElement(int arr[], int n, int key) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != key) {
            arr[count++] = arr[i];
        }
    }
    return count;
}


int main() {
    int arr[] = {3, 2, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;


    printf("Enter the key to remove: ");
    scanf("%d", &key);


    int newLength = removeElement(arr, n, key);


    printf("Number of elements not equal to %d: %d\n", key, newLength);
    printf("Updated array: ");
    for (int i = 0; i < newLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");


    return 0;
}