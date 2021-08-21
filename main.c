#include<stdio.h>
#include<stdlib.h>
#include"graph.h"

int main(){
    graph g;
    initGraph(&g, "data.txt");
     DFS(g, 0);
    printGraph(g);
 
}
