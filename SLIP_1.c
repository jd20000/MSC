// #include <stdio.h>
// #include <time.h>

// void selection_sort(int arr[], int n) {
//     for (int i = 0; i < n-1; i++) {
//         int min = i;
//         for (int j = i+1; j < n; j++) {
//             if (arr[j] < arr[min])
//                 min = j;
//         }
//         int temp = arr[i];
//         arr[i] = arr[min];
//         arr[min] = temp;
//     }
// }

// int main() {
//     int n;
//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     int arr[n];
//     printf("Enter elements:\n");
//     for (int i = 0; i < n; i++)
//         scanf("%d", &arr[i]);

//     clock_t start = clock();

//     selection_sort(arr, n);

//     clock_t end = clock();

//     printf("Sorted array:\n");
//     for (int i = 0; i < n; i++)
//         printf("%d ", arr[i]);

//     double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
//     printf("\nTime taken: %f seconds\n", time_taken);

//     return 0;
// }




#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return i+1;
}

void quick_sort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quick_sort(arr, low, pi-1);
        quick_sort(arr, pi+1, high);
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Generate random numbers
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 1000;

    printf("Original array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    clock_t start = clock();

    quick_sort(arr, 0, n-1);

    clock_t end = clock();

    printf("\nSorted array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\nTime taken: %f seconds\n", time_taken);

    return 0;
}