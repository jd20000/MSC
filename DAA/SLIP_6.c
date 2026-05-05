// #include <stdio.h>
// #include <limits.h>

// #define V 5

// void prims(int graph[V][V]) {
//     int selected[V] = {0};
//     selected[0] = 1;

//     int edges = 0;
//     printf("Edge : Weight\n");

//     while (edges < V - 1) {
//         int min = INT_MAX;
//         int x = 0, y = 0;

//         for (int i = 0; i < V; i++) {
//             if (selected[i]) {
//                 for (int j = 0; j < V; j++) {
//                     if (!selected[j] && graph[i][j]) {
//                         if (graph[i][j] < min) {
//                             min = graph[i][j];
//                             x = i;
//                             y = j;
//                         }
//                     }
//                 }
//             }
//         }

//         printf("%d - %d : %d\n", x, y, graph[x][y]);
//         selected[y] = 1;
//         edges++;
//     }
// }

// int main() {
//     int graph[V][V] = {
//         {0, 2, 0, 6, 0},
//         {2, 0, 3, 8, 5},
//         {0, 3, 0, 0, 7},
//         {6, 8, 0, 0, 9},
//         {0, 5, 7, 9, 0}
//     };

//     prims(graph);
//     return 0;
// }



#include <stdio.h>
#include <string.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int lcs_length(char X[], char Y[]) {
    int m = strlen(X);
    int n = strlen(Y);
    int dp[m+1][n+1];

    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (X[i-1] == Y[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }

    return dp[m][n];
}

int main() {
    char X[100], Y[100];

    printf("Enter first string: ");
    scanf("%s", X);

    printf("Enter second string: ");
    scanf("%s", Y);

    printf("Length of LCS: %d\n", lcs_length(X, Y));

    return 0;
}