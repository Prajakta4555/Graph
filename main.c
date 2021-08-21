#include<stdio.h>
#include<stdlib.h>
#include"graph.h"

int main(){
    graph g;
    initGraph(&g, "prims.txt");
    printGraph(g);
  edge *e = prims(&g, 0);
  int weight = 0;
    for(int i =0; i<g.n-1;i++){
       printf("\n%d - %d - %d", e[i].start+1, e[i].dest+1, e[i].weight);
        weight += e[i].weight;
    }
    printf("\nWeight of min Spanning tree %d\n", weight);

}
