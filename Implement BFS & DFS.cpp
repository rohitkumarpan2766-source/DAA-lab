#include <stdio.h>

#define MAX 5

int graph[MAX][MAX] = {
    {0,1,0,1,0},
    {1,0,1,1,0},
    {0,1,0,0,0},
    {1,1,0,0,1},
    {0,0,0,1,0}
};

int visited[MAX];

void DFS(int v) {
    printf("%d ", v);
    visited[v] = 1;

    for(int i = 0; i < MAX; i++) {
        if(graph[v][i] == 1 && !visited[i]) {
            DFS(i);
        }
    }
}

void BFS(int start) {
    int queue[MAX], front = 0, rear = 0;

    queue[rear++] = start;
    visited[start] = 1;

    while(front < rear) {
        int v = queue[front++];
        printf("%d ", v);

        for(int i = 0; i < MAX; i++) {
            if(graph[v][i] == 1 && !visited[i]) {
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }
}

int main() {

    for(int i = 0; i < MAX; i++) visited[i] = 0;

    printf("BFS Traversal: ");
    BFS(0);

    for(int i = 0; i < MAX; i++) visited[i] = 0;

    printf("\nDFS Traversal: ");
    DFS(0);

    return 0;
}