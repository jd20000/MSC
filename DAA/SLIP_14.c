// Insertion Sort

// Output
// Sorted list

// Learn

// Best case O(n)

// --------------------------------------------------

// // #include <stdio.h>
// // #include <time.h>

// // void insertion_sort(int arr[], int n) {
// //     for (int i = 1; i < n; i++) {
// //         int key = arr[i];
// //         int j = i - 1;

// //         while (j >= 0 && arr[j] > key) {
// //             arr[j + 1] = arr[j];
// //             j--;
// //         }
// //         arr[j + 1] = key;
// //     }
// // }

// // int main() {
// //     int n;
// //     printf("Enter number of elements: ");
// //     scanf("%d", &n);

// //     int arr[n];
// //     printf("Enter elements:\n");
// //     for (int i = 0; i < n; i++)
// //         scanf("%d", &arr[i]);

// //     clock_t start = clock();

// //     insertion_sort(arr, n);

// //     clock_t end = clock();

// //     printf("Sorted array:\n");
// //     for (int i = 0; i < n; i++)
// //         printf("%d ", arr[i]);

// //     double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
// //     printf("\nTime taken: %f seconds\n", time_taken);

// //     return 0;
// // }



// DFS + BFS

// Learn

// Compare traversal
// -------------------------------------------
// #include <stdio.h>

// #define V 5

// int visited[V];

// // -------- DFS --------
// void dfs(int graph[V][V], int v) {
//     visited[v] = 1;
//     printf("%d ", v);

//     for (int i = 0; i < V; i++) {
//         if (graph[v][i] && !visited[i])
//             dfs(graph, i);
//     }
// }

// // -------- BFS --------
// int queue[100], front = -1, rear = -1;

// void enqueue(int x) {
//     if (rear == -1) front = 0;
//     queue[++rear] = x;
// }

// int dequeue() {
//     return queue[front++];
// }

// int isEmpty() {
//     return front > rear;
// }

// void bfs(int graph[V][V], int start) {
//     enqueue(start);
//     visited[start] = 1;

//     while (!isEmpty()) {
//         int v = dequeue();
//         printf("%d ", v);

//         for (int i = 0; i < V; i++) {
//             if (graph[v][i] && !visited[i]) {
//                 enqueue(i);
//                 visited[i] = 1;
//             }
//         }
//     }
// }

// int main() {
//     int graph[V][V] = {
//         {0,1,1,0,0},
//         {1,0,0,1,0},
//         {1,0,0,1,1},
//         {0,1,1,0,1},
//         {0,0,1,1,0}
//     };

//     printf("DFS:\n");
//     for (int i = 0; i < V; i++) visited[i] = 0;
//     dfs(graph, 0);

//     printf("\nBFS:\n");
//     for (int i = 0; i < V; i++) visited[i] = 0;
//     bfs(graph, 0);

//     return 0;
// }