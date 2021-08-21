#include<stdio.h>
#include<stdlib.h>
#include"graph.h"

int main(){
    graph g;
    initGraph(&g, "data.txt");
    printGraph(g);
    BFS(g, 0);
 
}
