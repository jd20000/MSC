// // #include <stdio.h>

// // #define V 4

// // int graph[V][V] = {
// //     {0,1,1,1},
// //     {1,0,1,0},
// //     {1,1,0,1},
// //     {1,0,1,0}
// // };

// // int color[V];

// // int isSafe(int v, int c) {
// //     for (int i = 0; i < V; i++) {
// //         if (graph[v][i] && color[i] == c)
// //             return 0;
// //     }
// //     return 1;
// // }

// // int solve(int v, int m) {
// //     if (v == V)
// //         return 1;

// //     for (int c = 1; c <= m; c++) {
// //         if (isSafe(v, c)) {
// //             color[v] = c;

// //             if (solve(v + 1, m))
// //                 return 1;

// //             color[v] = 0;
// //         }
// //     }
// //     return 0;
// // }

// // int main() {
// //     int m = 3; // number of colors

// //     if (solve(0, m)) {
// //         printf("Coloring:\n");
// //         for (int i = 0; i < V; i++)
// //             printf("Vertex %d -> Color %d\n", i, color[i]);
// //     } else {
// //         printf("No solution\n");
// //     }

// //     return 0;
// // }



// Live/E/Dead Node

// Output

// E-node: 0
// Live: 1 2
// Dead: 3

// Learn

// Branch & Bound states
// ---------------------------------------------
// #include <stdio.h>

// #define MAX 10

// int graph[MAX][MAX], visited[MAX], n;

// void classifyNodes(int start) {
//     int queue[MAX], front = 0, rear = 0;

//     queue[rear++] = start;
//     visited[start] = 1;

//     printf("E-node: %d\n", start);

//     while (front < rear) {
//         int v = queue[front++];

//         int isLeaf = 1;

//         for (int i = 0; i < n; i++) {
//             if (graph[v][i] && !visited[i]) {
//                 printf("Live node: %d\n", i);
//                 queue[rear++] = i;
//                 visited[i] = 1;
//                 isLeaf = 0;
//             }
//         }

//         if (isLeaf)
//             printf("Dead node: %d\n", v);
//     }
// }

// int main() {
//     n = 5;

//     int temp[5][5] = {
//         {0,1,1,0,0},
//         {0,0,0,1,0},
//         {0,0,0,0,1},
//         {0,0,0,0,0},
//         {0,0,0,0,0}
//     };

//     for (int i = 0; i < n; i++) {
//         visited[i] = 0;
//         for (int j = 0; j < n; j++)
//             graph[i][j] = temp[i][j];
//     }

//     classifyNodes(0);

//     return 0;
// }