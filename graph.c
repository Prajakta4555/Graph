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

<<<<<<< HEAD
edge* prims(graph *g, int s){
    edge *spanningtree = (edge *)malloc(sizeof(edge) * (g->n - 1));
    int *visited = (int *)calloc(g->n, sizeof(int));
    visited[s] = 1;
    edge minedge;
    minedge.weight = INT_MAX;
    int m = g->n;
    for(int k = 0; k < m-1; k++){
        for(int i = 0; i < m; i++){
            for(int j = 0; j < m; j++){
                //1st check is there an edge from i to j
                //check that i is visited and j is not visited
                //compare it with the min edge
                //if w is less than min edge wt them make this edge as minedge
                if(g->A[i][j] != 0 && visited[i] == 1 && visited[j] == 0){
                    if(g->A[i][j] < minedge.weight){
                        minedge.start = i;
                        minedge.dest = j;
                        minedge.weight = g->A[i][j];
                    }

                }
            }
        }
        //printf("%d - %d - %d\n", minedge.start, minedge.dest, minedge.weight);
        spanningtree[k] = minedge;
        visited[minedge.dest] = 1;
        minedge.weight = INT_MAX;
    }
        return spanningtree;
=======
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
>>>>>>> 00a7cc8f05230ddc8212b0df1edc881bacc4f988
}


void DFS(graph g, int start){
   Stack s;
   int n,i;
   init(&s, g.n);
   int *visited = (int*)calloc(g.n,sizeof(int)); //all initialized to zero
   visited[start] = 1;
   printf("%d\t", start);
   push(&s, start);
   while(isEmpty(s)!=INT_MAX){
        n = peek(s);
        //find adjacent non visited vertex of n
        for(i=0;i<g.n; i++){
            if(g.A[n][i] && !visited[i]){
                visited[i] = 1;
                printf("%d\t", i);
                push(&s, i);
                break;
            }
        }
        if(i == g.n)
            pop(&s);

   }
   return;
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
