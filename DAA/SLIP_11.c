// DFS

// Output

// 0 1 3 4 2

// Learn

// Depth traversal
// ---------------------------------


// // #include <stdio.h>

// // #define V 5

// // int visited[V];

// // void dfs(int graph[V][V], int v) {
// //     visited[v] = 1;
// //     printf("%d ", v);

// //     for (int i = 0; i < V; i++) {
// //         if (graph[v][i] && !visited[i]) {
// //             dfs(graph, i);
// //         }
// //     }
// // }

// // int main() {
// //     int graph[V][V] = {
// //         {0,1,1,0,0},
// //         {1,0,0,1,0},
// //         {1,0,0,1,1},
// //         {0,1,1,0,1},
// //         {0,0,1,1,0}
// //     };

// //     for (int i = 0; i < V; i++)
// //         visited[i] = 0;

// //     printf("DFS Traversal:\n");
// //     dfs(graph, 0);

// //     return 0;
// // }







// Dijkstra
// Output

// 0 -> 0
// 1 -> 10
// ...

// Learn
// Shortest path
// -------------------------------

// #include <stdio.h>
// #include <limits.h>

// #define V 5

// int minDistance(int dist[], int visited[]) {
//     int min = INT_MAX, min_index;

//     for (int i = 0; i < V; i++) {
//         if (!visited[i] && dist[i] <= min) {
//             min = dist[i];
//             min_index = i;
//         }
//     }
//     return min_index;
// }

// void dijkstra(int graph[V][V], int src) {
//     int dist[V], visited[V];

//     for (int i = 0; i < V; i++) {
//         dist[i] = INT_MAX;
//         visited[i] = 0;
//     }

//     dist[src] = 0;

//     for (int count = 0; count < V - 1; count++) {
//         int u = minDistance(dist, visited);
//         visited[u] = 1;

//         for (int v = 0; v < V; v++) {
//             if (!visited[v] && graph[u][v] &&
//                 dist[u] != INT_MAX &&
//                 dist[u] + graph[u][v] < dist[v]) {
//                 dist[v] = dist[u] + graph[u][v];
//             }
//         }
//     }

//     printf("Vertex\tDistance from Source\n");
//     for (int i = 0; i < V; i++)
//         printf("%d \t %d\n", i, dist[i]);
// }

// int main() {
//     int graph[V][V] = {
//         {0, 10, 0, 30, 100},
//         {10, 0, 50, 0, 0},
//         {0, 50, 0, 20, 10},
//         {30, 0, 20, 0, 60},
//         {100, 0, 10, 60, 0}
//     };

//     dijkstra(graph, 0);
//     return 0;
// }