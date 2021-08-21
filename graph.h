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
<<<<<<< HEAD
<<<<<<< HEAD
=======
void BFS(graph g, int start);
edge* prims(graph *g, int x);
int* dijkstras(graph g, int start);
>>>>>>> Prims
=======
>>>>>>> 67f44a891d19af26d1998e9065a9c629c491d600
>>>>>>> 00a7cc8f05230ddc8212b0df1edc881bacc4f988
void printGraph(graph g);

#endif // GRAPH_H_INCLUDED
