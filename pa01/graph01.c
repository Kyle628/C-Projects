#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "intList.h"
#include "loadgraph.h"

int main(int argc, char **argv) {
  argc = argc;
  int m,n;
  IntList* adjvertices;
  char* inbuf = argv[1];
  fopen(inbuf, "r");
  char firstline[100];
  int numfields = sscanf(firstline, " %d", &n);
  printf("%d\n", n);

  adjvertices = initedges(n);
  m = loadedges(inbuf, adjvertices);
  printf("%d\n", m);

  for (int i = 1; i <=n; i++) {
    printf("%d   ", i);
    printlist(adjvertices[i]);
    printf("\n");
  }
}
  
  
  
