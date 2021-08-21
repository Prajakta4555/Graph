#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED

typedef struct graph{
    int **A;
    int n;
}graph;


typedef struct edge{
    int start;
    int dest;
    int weight;
}edge;


void initGraph(graph *g, char* filename);
void DFS(graph g, int start);
void printGraph(graph g);

#endif // GRAPH_H_INCLUDED
