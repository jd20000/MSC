// Huffman

// Output

// a : 110
// b : 111
// ...

// Learn

// Compression technique
// ------------------------------------------

// // #include <stdio.h>
// // #include <stdlib.h>

// // struct Node {
// //     char ch;
// //     int freq;
// //     struct Node *left, *right;
// // };

// // struct Node* createNode(char ch, int freq) {
// //     struct Node* node = (struct Node*)malloc(sizeof(struct Node));
// //     node->ch = ch;
// //     node->freq = freq;
// //     node->left = node->right = NULL;
// //     return node;
// // }

// // int findMin(struct Node* arr[], int n) {
// //     int min = 0;
// //     for (int i = 1; i < n; i++)
// //         if (arr[i]->freq < arr[min]->freq)
// //             min = i;
// //     return min;
// // }

// // void printCodes(struct Node* root, char code[], int top) {
// //     if (root->left) {
// //         code[top] = '0';
// //         printCodes(root->left, code, top + 1);
// //     }
// //     if (root->right) {
// //         code[top] = '1';
// //         printCodes(root->right, code, top + 1);
// //     }
// //     if (!root->left && !root->right) {
// //         printf("%c : ", root->ch);
// //         for (int i = 0; i < top; i++)
// //             printf("%c", code[i]);
// //         printf("\n");
// //     }
// // }

// // void huffman(char chars[], int freq[], int n) {
// //     struct Node* nodes[100];

// //     for (int i = 0; i < n; i++)
// //         nodes[i] = createNode(chars[i], freq[i]);

// //     while (n > 1) {
// //         int i1 = findMin(nodes, n);
// //         struct Node* left = nodes[i1];
// //         nodes[i1] = nodes[n-1];
// //         n--;

// //         int i2 = findMin(nodes, n);
// //         struct Node* right = nodes[i2];
// //         nodes[i2] = nodes[n-1];
// //         n--;

// //         struct Node* merged = createNode('$', left->freq + right->freq);
// //         merged->left = left;
// //         merged->right = right;

// //         nodes[n] = merged;
// //         n++;
// //     }

// //     char code[100];
// //     printf("Huffman Codes:\n");
// //     printCodes(nodes[0], code, 0);
// // }

// // int main() {
// //     char chars[] = {'a', 'b', 'c', 'd'};
// //     int freq[] = {5, 9, 12, 13};
// //     int n = 4;

// //     huffman(chars, freq, n);
// //     return 0;
// // }




// 4 Queens

// Output
// Board patterns

// Learn

// Constraint solving

// ---------------------------------

// #include <stdio.h>

// #define N 4

// int board[N];

// int isSafe(int row, int col) {
//     for (int i = 0; i < row; i++) {
//         if (board[i] == col || 
//             abs(board[i] - col) == abs(i - row))
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