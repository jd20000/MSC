// #include <stdio.h>

// #define V 5

// int graph[V][V] = {
//     {0,1,0,1,0},
//     {1,0,1,1,1},
//     {0,1,0,0,1},
//     {1,1,0,0,1},
//     {0,1,1,1,0}
// };

// int path[V];

// int isSafe(int v, int pos) {
//     if (!graph[path[pos-1]][v])
//         return 0;

//     for (int i = 0; i < pos; i++)
//         if (path[i] == v)
//             return 0;

//     return 1;
// }

// int solve(int pos) {
//     if (pos == V) {
//         return graph[path[pos-1]][path[0]] == 1;
//     }

//     for (int v = 1; v < V; v++) {
//         if (isSafe(v, pos)) {
//             path[pos] = v;

//             if (solve(pos + 1))
//                 return 1;

//             path[pos] = -1;
//         }
//     }
//     return 0;
// }

// int main() {
//     for (int i = 0; i < V; i++)
//         path[i] = -1;

//     path[0] = 0;

//     if (solve(1)) {
//         printf("Hamiltonian Cycle exists:\n");
//         for (int i = 0; i < V; i++)
//             printf("%d ", path[i]);
//         printf("%d\n", path[0]);
//     } else {
//         printf("No Hamiltonian Cycle\n");
//     }

//     return 0;
// }



#include <stdio.h>
#include <stdlib.h>

#define N 4

int board[N];

int isSafe(int row, int col) {
    for (int i = 0; i < row; i++) {
        if (board[i] == col || abs(board[i] - col) == abs(i - row))
            return 0;
    }
    return 1;
}

void printBoard() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (board[i] == j)
                printf("Q ");
            else
                printf(". ");
        }
        printf("\n");
    }
    printf("\n");
}

void solve(int row) {
    if (row == N) {
        printBoard();
        return;
    }

    for (int col = 0; col < N; col++) {
        if (isSafe(row, col)) {
            board[row] = col;
            solve(row + 1);
        }
    }
}

int main() {
    solve(0);
    return 0;
}