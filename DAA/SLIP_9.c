// Q.1

// OBST

// Output

// Minimum cost: ...

// Learn

// Optimal search tree

// ----------------------------------------

// // #include <stdio.h>

// // #define MAX 10

// // int sum(int freq[], int i, int j) {
// //     int s = 0;
// //     for (int k = i; k <= j; k++)
// //         s += freq[k];
// //     return s;
// // }

// // int min(int a, int b) {
// //     return (a < b) ? a : b;
// // }

// // int optimalBST(int freq[], int n) {
// //     int cost[MAX][MAX];

// //     for (int i = 0; i < n; i++)
// //         cost[i][i] = freq[i];

// //     for (int L = 2; L <= n; L++) {
// //         for (int i = 0; i <= n - L; i++) {
// //             int j = i + L - 1;
// //             cost[i][j] = 99999;

// //             for (int r = i; r <= j; r++) {
// //                 int c = ((r > i) ? cost[i][r-1] : 0) +
// //                         ((r < j) ? cost[r+1][j] : 0) +
// //                         sum(freq, i, j);

// //                 cost[i][j] = min(cost[i][j], c);
// //             }
// //         }
// //     }
// //     return cost[0][n-1];
// // }

// // int main() {
// //     int n = 3;
// //     int freq[] = {34, 8, 50};

// //     printf("Minimum cost of OBST: %d\n", optimalBST(freq, n));
// //     return 0;
// // }



// Sum of Subset

// Output

// 2 8
// 4 6

// Learn

// Backtracking

// ---------------------------------------

// #include <stdio.h>

// int w[10], x[10], n, target;

// void sumOfSubset(int s, int k, int r) {
//     x[k] = 1;

//     if (s + w[k] == target) {
//         printf("Subset: ");
//         for (int i = 0; i <= k; i++)
//             if (x[i])
//                 printf("%d ", w[i]);
//         printf("\n");
//     }
//     else if (s + w[k] + w[k+1] <= target) {
//         sumOfSubset(s + w[k], k + 1, r - w[k]);
//     }

//     if ((s + r - w[k] >= target) && (s + w[k+1] <= target)) {
//         x[k] = 0;
//         sumOfSubset(s, k + 1, r - w[k]);
//     }
// }

// int main() {
//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     printf("Enter elements (sorted): ");
//     for (int i = 0; i < n; i++)
//         scanf("%d", &w[i]);

//     printf("Enter target sum: ");
//     scanf("%d", &target);

//     int total = 0;
//     for (int i = 0; i < n; i++)
//         total += w[i];

//     sumOfSubset(0, 0, total);

//     return 0;   
// }