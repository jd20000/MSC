// MCM

// Output

// Minimum multiplications: 18000

// Learn

// DP optimization
// ---------------------------------------------

// // #include <stdio.h>
// // #include <limits.h>

// // #define MAX 10

// // int matrixChain(int p[], int n) {
// //     int m[MAX][MAX];

// //     for (int i = 1; i < n; i++)
// //         m[i][i] = 0;

// //     for (int L = 2; L < n; L++) {
// //         for (int i = 1; i < n - L + 1; i++) {
// //             int j = i + L - 1;
// //             m[i][j] = INT_MAX;

// //             for (int k = i; k < j; k++) {
// //                 int q = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j];
// //                 if (q < m[i][j])
// //                     m[i][j] = q;
// //             }
// //         }
// //     }
// //     return m[1][n-1];
// // }

// // int main() {
// //     int p[] = {10, 20, 30, 40}; // dimensions
// //     int n = sizeof(p)/sizeof(p[0]);

// //     printf("Minimum multiplications: %d\n", matrixChain(p, n));
// //     return 0;
// // }



// #include <stdio.h>

// #define MAX 10

// int sum(int freq[], int i, int j) {
//     int s = 0;
//     for (int k = i; k <= j; k++)
//         s += freq[k];
//     return s;
// }

// int min(int a, int b) {
//     return (a < b) ? a : b;
// }

// int optimalBST(int freq[], int n) {
//     int cost[MAX][MAX];

//     for (int i = 0; i < n; i++)
//         cost[i][i] = freq[i];

//     for (int L = 2; L <= n; L++) {
//         for (int i = 0; i <= n - L; i++) {
//             int j = i + L - 1;
//             cost[i][j] = 99999;

//             for (int r = i; r <= j; r++) {
//                 int c = ((r > i) ? cost[i][r-1] : 0) +
//                         ((r < j) ? cost[r+1][j] : 0) +
//                         sum(freq, i, j);

//                 cost[i][j] = min(cost[i][j], c);
//             }
//         }
//     }
//     return cost[0][n-1];
// }

// int main() {
//     int freq[] = {34, 8, 50};
//     int n = 3;

//     printf("Minimum cost of OBST: %d\n", optimalBST(freq, n));
//     return 0;
// }