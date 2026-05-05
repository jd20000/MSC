// #include <stdio.h>

// #define V 5

// int queue[100], front = -1, rear = -1;
// int visited[V];

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

//     for (int i = 0; i < V; i++)
//         visited[i] = 0;

//     printf("BFS Traversal:\n");
//     bfs(graph, 0);

//     return 0;
// }


#include <stdio.h>
#include <time.h>

void selection_sort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int min = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[min])
                min = j;
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    clock_t start = clock();

    selection_sort(arr, n);

    clock_t end = clock();

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\nTime taken: %f seconds\n", time_taken);

    return 0;
}