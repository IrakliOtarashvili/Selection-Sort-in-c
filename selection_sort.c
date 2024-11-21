#include <stdio.h>

void sort(int arr[], int n);


int main(void) {
    int arr[] = {5, 8, 3, 6, 7, 11};
    int length = sizeof(arr) / 4;
    sort(arr, length);

    for (int i = 0; i < 6; i++) {
        printf("%i", arr[i]);
    }
    printf("\n");
}

void sort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {

        int min_idx = i;

        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}
