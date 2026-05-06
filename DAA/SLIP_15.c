// Knapsack (LCBB)

// Output

// Max profit: ...

// Learn

// Branch & Bound

// ----------------------------------


// // #include <stdio.h>
// // #include <stdlib.h>

// // struct Item {
// //     int weight, value;
// //     float ratio;
// // };

// // int cmp(const void *a, const void *b) {
// //     struct Item *i1 = (struct Item *)a;
// //     struct Item *i2 = (struct Item *)b;
// //     return (i2->ratio > i1->ratio) ? 1 : -1;
// // }

// // float bound(int W, int wt[], int val[], int n, int level, int profit, int weight) {
// //     if (weight >= W) return 0;

// //     float result = profit;
// //     int j = level + 1;
// //     int totweight = weight;

// //     while (j < n && totweight + wt[j] <= W) {
// //         totweight += wt[j];
// //         result += val[j];
// //         j++;
// //     }

// //     if (j < n)
// //         result += (W - totweight) * ((float)val[j] / wt[j]);

// //     return result;
// // }

// // int knapsack(int W, int wt[], int val[], int n) {
// //     struct {
// //         int level, profit, weight;
// //         float bound;
// //     } Q[1000];

// //     int front = 0, rear = 0;

// //     Q[rear++] = (typeof(Q[0])){-1, 0, 0, 0};
// //     int maxProfit = 0;

// //     while (front != rear) {
// //         typeof(Q[0]) u = Q[front++];

// //         if (u.level == n - 1) continue;

// //         typeof(Q[0]) v;
// //         v.level = u.level + 1;

// //         // Include item
// //         v.weight = u.weight + wt[v.level];
// //         v.profit = u.profit + val[v.level];

// //         if (v.weight <= W && v.profit > maxProfit)
// //             maxProfit = v.profit;

// //         v.bound = bound(W, wt, val, n, v.level, v.profit, v.weight);

// //         if (v.bound > maxProfit)
// //             Q[rear++] = v;

// //         // Exclude item
// //         v.weight = u.weight;
// //         v.profit = u.profit;
// //         v.bound = bound(W, wt, val, n, v.level, v.profit, v.weight);

// //         if (v.bound > maxProfit)
// //             Q[rear++] = v;
// //     }

// //     return maxProfit;
// // }

// // int main() {
// //     int val[] = {60, 100, 120};
// //     int wt[] = {10, 20, 30};
// //     int W = 50;
// //     int n = 3;

// //     printf("Maximum Profit: %d\n", knapsack(W, wt, val, n));
// //     return 0;
// // }


// Graph Coloring

// Output

// Vertex 0 → Color 1

// Learn

// Constraint problem
// --------------------------------------------

// #include <stdio.h>

// #define V 4

// int graph[V][V] = {
//     {0,1,1,1},
//     {1,0,1,0},
//     {1,1,0,1},
//     {1,0,1,0}
// };

// int color[V];

// int isSafe(int v, int c) {
//     for (int i = 0; i < V; i++) {
//         if (graph[v][i] && color[i] == c)
//             return 0;
//     }
//     return 1;
// }

// int solve(int v, int m) {
//     if (v == V)
//         return 1;

//     for (int c = 1; c <= m; c++) {
//         if (isSafe(v, c)) {
//             color[v] = c;

//             if (solve(v + 1, m))
//                 return 1;

//             color[v] = 0;
//         }
//     }
//     return 0;
// }

// int main() {
//     int m = 3; // number of colors

//     if (solve(0, m)) {
//         printf("Coloring:\n");
//         for (int i = 0; i < V; i++)
//             printf("Vertex %d -> Color %d\n", i, color[i]);
//     } else {
//         printf("No solution\n");
//     }

//     return 0;
// }