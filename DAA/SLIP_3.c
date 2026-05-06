// Quick Sort
// Q.1
// Input:
// 5
// 5 3 8 1 2

// Output

// 1 2 3 5 8
// Time taken: ...

// Learn

// Basic sorting
// Time measurement using clock()

// ----

// Q.2
// Prim’s

// Output

// 0-1 : 2
// 1-2 : 3
// ...

// Learn

// MST (minimum cost graph)
// ------------------------

//    # include <stdio.h>
//    # include <time.h>

//   void swap(int *a, int *b) {
//       int t = *a;
//       *a = *b;
//       *b = t;
//   }

//   int partition(int arr[], int low, int high) {
//       int pivot = arr[low];   // same logic as your Python (first element)
//       int i = low + 1;
//       int j = high;

//       while (1) {
//           while (i <= high && arr[i] <= pivot)
//               i++;
//           while (arr[j] > pivot)
//               j--;

//           if (i < j)
//               swap(&arr[i], &arr[j]);
//           else
//               break;
//       }

//       swap(&arr[low], &arr[j]);
//       return j;
//   }

//   void quick_sort(int arr[], int low, int high) {
//       if (low < high) {
//           int pi = partition(arr, low, high);
//           quick_sort(arr, low, pi - 1);
//           quick_sort(arr, pi + 1, high);
//       }
//   }

//   int main() {
//       int n;
//       printf("Enter number of elements: ");
//       scanf("%d", &n);

//       int arr[n];
//       printf("Enter elements:\n");
//       for (int i = 0; i < n; i++)
//           scanf("%d", &arr[i]);

//       clock_t start = clock();

//       quick_sort(arr, 0, n - 1);

//       clock_t end = clock();

//       printf("Sorted array:\n");
//       for (int i = 0; i < n; i++)
//           printf("%d ", arr[i]);

//       double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
//       printf("\nTime taken: %f seconds\n", time_taken);

//       return 0;
//   }



// // # include <stdio.h>
// // # include <limits.h>

// //  # define V 5

// // void prims(int graph[V][V]) {
// //     int selected[V] = {0};
// //     selected[0] = 1;

// //     int edges = 0;
// //     printf("Edge : Weight\n");

// //     while (edges < V - 1) {
// //         int min = INT_MAX;
// //         int x = 0, y = 0;

// //         for (int i = 0; i < V; i++) {
// //             if (selected[i]) {
// //                 for (int j = 0; j < V; j++) {
// //                     if (!selected[j] && graph[i][j]) {
// //                         if (graph[i][j] < min) {
// //                             min = graph[i][j];
// //                             x = i;
// //                             y = j;
// //                         }
// //                     }
// //                 }
// //             }
// //         }

// //         printf("%d - %d : %d\n", x, y, graph[x][y]);
// //         selected[y] = 1;
// //         edges++;
// //     }
// // }

// // int main() {
// //     int graph[V][V] = {
// //         {0, 2, 0, 6, 0},
// //         {2, 0, 3, 8, 5},
// //         {0, 3, 0, 0, 7},
// //         {6, 8, 0, 0, 9},
// //         {0, 5, 7, 9, 0}
// //     };

// //     prims(graph);
// //     return 0;
// // }