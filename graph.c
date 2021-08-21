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


void printGraph(graph g){
    for(int i=0; i<g.n; i++){
        for(int j=0; j<g.n; j++){
            printf("%d ", g.A[i][j]);
        }
        printf("\n");
    }
    return;
}
