#include<stdio.h>
#include<stdlib.h>
#include"stack.h"
#include"graph.h"
#include<limits.h>
#include"queue.h"


void initGraph(graph *g, char* filename){
    int n,d;
    FILE *f = fopen(filename, "r");
    if(f == NULL)
        return;
    fscanf(f, "%d", &n);
    g->n = n;
    g->A = (int**)malloc(sizeof(int*)*n);
    for(int i = 0;i<n; i++){
        g->A[i] = (int*)malloc(sizeof(int)*n);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            fscanf(f, "%d", &d);
            g->A[i][j] = d;
        }
    }
    return;
}

void BFS(graph g, int start){
    CircularQueue q;
    int n,i;
    initQueue(&q, g.n);
    int *visited = (int*)calloc(g.n,sizeof(int));
    visited[start] = 1;
    printf("%d\t", start);
    enqueue(&q, start);
    while(isEmptyQ(q) != INT_MAX){
        n = dequeue(&q);

        for(i=0;i<g.n; i++){
            if(g.A[n][i] && !visited[i]){
                visited[i] = 1;
                printf("%d\t", i);
                enqueue(&q,i);
            }
        }
    }
}

void printGraph(graph g){
    for(int i=0; i<g.n; i++){
        for(int j=0; j<g.n; j++){
            printf("%d ", g.A[i][j]);
        }
        printf("\n");
    }
    return;
}
