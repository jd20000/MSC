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

// void printSolution() {
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
//         printSolution();
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


#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int knapsack(int W, int wt[], int val[], int n) {
    int dp[n+1][W+1];

    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (wt[i-1] <= w)
                dp[i][w] = max(val[i-1] + dp[i-1][w - wt[i-1]],
                               dp[i-1][w]);
            else
                dp[i][w] = dp[i-1][w];
        }
    }
    return dp[n][W];
}

int main() {
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int W = 50;
    int n = 3;

    printf("Maximum Profit: %d\n", knapsack(W, wt, val, n));
    return 0;
}