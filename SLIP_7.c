// #include <stdio.h>
// #include <limits.h>

// #define V 5

// int minDistance(int dist[], int visited[]) {
//     int min = INT_MAX, min_index;

//     for (int v = 0; v < V; v++) {
//         if (!visited[v] && dist[v] <= min) {
//             min = dist[v];
//             min_index = v;
//         }
//     }
//     return min_index;
// }

// void dijkstra(int graph[V][V], int src) {
//     int dist[V], visited[V];

//     for (int i = 0; i < V; i++) {
//         dist[i] = INT_MAX;
//         visited[i] = 0;
//     }

//     dist[src] = 0;

//     for (int count = 0; count < V - 1; count++) {
//         int u = minDistance(dist, visited);
//         visited[u] = 1;

//         for (int v = 0; v < V; v++) {
//             if (!visited[v] && graph[u][v] &&
//                 dist[u] != INT_MAX &&
//                 dist[u] + graph[u][v] < dist[v]) {
//                 dist[v] = dist[u] + graph[u][v];
//             }
//         }
//     }

//     printf("Vertex\tDistance from Source\n");
//     for (int i = 0; i < V; i++)
//         printf("%d \t %d\n", i, dist[i]);
// }

// int main() {
//     int graph[V][V] = {
//         {0, 10, 0, 30, 100},
//         {10, 0, 50, 0, 0},
//         {0, 50, 0, 20, 10},
//         {30, 0, 20, 0, 60},
//         {100, 0, 10, 60, 0}
//     };

//     dijkstra(graph, 0);
//     return 0;
// }



#include <stdio.h>

#define V 6

int visited[V];
int stack[V], top = -1;

void push(int v) {
    stack[++top] = v;
}

void dfs(int graph[V][V], int v) {
    visited[v] = 1;

    for (int i = 0; i < V; i++) {
        if (graph[v][i] && !visited[i])
            dfs(graph, i);
    }

    push(v);
}

void topologicalSort(int graph[V][V]) {
    for (int i = 0; i < V; i++)
        visited[i] = 0;

    for (int i = 0; i < V; i++)
        if (!visited[i])
            dfs(graph, i);

    printf("Topological Order:\n");
    while (top != -1)
        printf("%d ", stack[top--]);
}

int main() {
    int graph[V][V] = {
        {0,1,1,0,0,0},
        {0,0,0,1,0,0},
        {0,0,0,1,1,0},
        {0,0,0,0,0,1},
        {0,0,0,0,0,1},
        {0,0,0,0,0,0}
    };

    topologicalSort(graph);
    return 0;
}