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
<<<<<<< HEAD
void BFS(graph g, int start);
=======
void DFS(graph g, int start);
>>>>>>> 67f44a891d19af26d1998e9065a9c629c491d600
void printGraph(graph g);

#endif // GRAPH_H_INCLUDED
