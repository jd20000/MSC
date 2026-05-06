// Topological

// Output

// 0 2 4 1 3 5

// Learn

// DAG ordering

// -------------------- 

// // #include <stdio.h>

// // #define V 6

// // int visited[V];
// // int stack[V], top = -1;

// // void push(int v) {
// //     stack[++top] = v;
// // }

// // void dfs(int graph[V][V], int v) {
// //     visited[v] = 1;

// //     for (int i = 0; i < V; i++) {
// //         if (graph[v][i] && !visited[i])
// //             dfs(graph, i);
// //     }

// //     push(v);
// // }

// // void topoSort(int graph[V][V]) {
// //     for (int i = 0; i < V; i++)
// //         visited[i] = 0;

// //     for (int i = 0; i < V; i++)
// //         if (!visited[i])
// //             dfs(graph, i);

// //     printf("Topological Order:\n");
// //     while (top != -1)
// //         printf("%d ", stack[top--]);
// // }

// // int main() {
// //     int graph[V][V] = {
// //         {0,1,1,0,0,0},
// //         {0,0,0,1,0,0},
// //         {0,0,0,1,1,0},
// //         {0,0,0,0,0,1},
// //         {0,0,0,0,0,1},
// //         {0,0,0,0,0,0}
// //     };

// //     topoSort(graph);
// //     return 0;
// // }



// 4 Queens

// Output
// Board patterns

// Learn

// Constraint solving

// ---------------------------------
// #include <stdio.h>
// #include <stdlib.h>

// #define N 4

// int board[N];

// int isSafe(int row, int col) {
//     for (int i = 0; i < row; i++) {
//         if (board[i] == col || abs(board[i] - col) == abs(i - row))
//             return 0;
//     }
//     return 1;
// }

// void printBoard() {
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++) {
//             if (board[i] == j)
//                 printf("Q ");
//             else
//                 printf(". ");
//         }
//         printf("\n");
//     }
//     printf("\n");
// }

// void solve(int row) {
//     if (row == N) {
//         printBoard();
//         return;
//     }

//     for (int col = 0; col < N; col++) {
//         if (isSafe(row, col)) {
//             board[row] = col;
//             solve(row + 1);
//         }
//     }
// }

// int main() {
//     solve(0);
//     return 0;
// }