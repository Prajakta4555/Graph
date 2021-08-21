#include<stdio.h>
#include<stdlib.h>
#include"graph.h"

int main(){
    graph g;
<<<<<<< HEAD
    initGraph(&g, "data.txt");
     DFS(g, 0);
=======
    initGraph(&g, "prims.txt");
>>>>>>> Prims
    printGraph(g);
  edge *e = prims(&g, 0);
  int weight = 0;
    for(int i =0; i<g.n-1;i++){
       printf("\n%d - %d - %d", e[i].start+1, e[i].dest+1, e[i].weight);
        weight += e[i].weight;
    }
    printf("\nWeight of min Spanning tree %d\n", weight);

}
