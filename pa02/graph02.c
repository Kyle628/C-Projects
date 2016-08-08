#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "intList.h"
#include "LoadGraph.h"

int main(int argc, char **argv) {
  argc = argc;
  FILE* fp;
  int m,n;
  IntList* adjvertices;
  char* inbuf = argv[1];
  fp = fopen(inbuf, "r");
  char firstline[100];
  fgets(firstline, 100, fp);
  int numfields = sscanf(firstline, " %d\n", &n);
  printf("n = %d\n", n);
  adjvertices = initedges(n);
  m = loadedges(inbuf, adjvertices);
  printf("m = %d\n", m);

  for (int i = 1; i <=n; i++) {
    printf("%d   ", i);
    printlist(adjvertices[i]);
    printf("\n");
    }
}
  
  
  
