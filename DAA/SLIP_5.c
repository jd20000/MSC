// #include <stdio.h>
// #include <stdlib.h>

// struct Edge {
//     int u, v, w;
// };

// int parent[100], rank_arr[100];

// int find(int i) {
//     if (parent[i] != i)
//         parent[i] = find(parent[i]);
//     return parent[i];
// }

// void union_set(int x, int y) {
//     int root_x = find(x);
//     int root_y = find(y);

//     if (rank_arr[root_x] < rank_arr[root_y])
//         parent[root_x] = root_y;
//     else if (rank_arr[root_x] > rank_arr[root_y])
//         parent[root_y] = root_x;
//     else {
//         parent[root_y] = root_x;
//         rank_arr[root_x]++;
//     }
// }

// int cmp(const void *a, const void *b) {
//     return ((struct Edge*)a)->w - ((struct Edge*)b)->w;
// }

// void kruskal(int V, int E, struct Edge edges[]) {
//     qsort(edges, E, sizeof(struct Edge), cmp);

//     for (int i = 0; i < V; i++) {
//         parent[i] = i;
//         rank_arr[i] = 0;
//     }

//     printf("Edge : Weight\n");

//     for (int i = 0; i < E; i++) {
//         int u = edges[i].u;
//         int v = edges[i].v;
//         int w = edges[i].w;

//         if (find(u) != find(v)) {
//             printf("%d - %d : %d\n", u, v, w);
//             union_set(u, v);
//         }
//     }
// }

// int main() {
//     int V = 5, E = 7;

//     struct Edge edges[] = {
//         {0,1,2}, {0,3,6}, {1,2,3},
//         {1,3,8}, {1,4,5}, {2,4,7}, {3,4,9}
//     };

//     kruskal(V, E, edges);
//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>

// struct Node {
//     char ch;
//     int freq;
//     struct Node *left, *right;
// };

// struct Node* createNode(char ch, int freq) {
//     struct Node* node = (struct Node*)malloc(sizeof(struct Node));
//     node->ch = ch;
//     node->freq = freq;
//     node->left = node->right = NULL;
//     return node;
// }

// // Simple min selection (no heap for simplicity in exam)
// int findMin(struct Node* arr[], int n) {
//     int min = 0;
//     for (int i = 1; i < n; i++)
//         if (arr[i]->freq < arr[min]->freq)
//             min = i;
//     return min;
// }

// void printCodes(struct Node* root, char code[], int top) {
//     if (root->left) {
//         code[top] = '0';
//         printCodes(root->left, code, top + 1);
//     }
//     if (root->right) {
//         code[top] = '1';
//         printCodes(root->right, code, top + 1);
//     }
//     if (!root->left && !root->right) {
//         printf("%c : ", root->ch);
//         for (int i = 0; i < top; i++)
//             printf("%c", code[i]);
//         printf("\n");
//     }
// }

// void huffman(char chars[], int freq[], int n) {
//     struct Node* nodes[100];

//     for (int i = 0; i < n; i++)
//         nodes[i] = createNode(chars[i], freq[i]);

//     while (n > 1) {
//         int i1 = findMin(nodes, n);
//         struct Node* left = nodes[i1];
//         nodes[i1] = nodes[n-1];
//         n--;

//         int i2 = findMin(nodes, n);
//         struct Node* right = nodes[i2];
//         nodes[i2] = nodes[n-1];
//         n--;

//         struct Node* merged = createNode('$', left->freq + right->freq);
//         merged->left = left;
//         merged->right = right;

//         nodes[n] = merged;
//         n++;
//     }

//     char code[100];
//     printf("Huffman Codes:\n");
//     printCodes(nodes[0], code, 0);
// }

// int main() {
//     char chars[] = {'a', 'b', 'c', 'd'};
//     int freq[] = {5, 9, 12, 13};
//     int n = 4;

//     huffman(chars, freq, n);
//     return 0;
// }