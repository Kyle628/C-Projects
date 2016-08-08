#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "intList.h"
#include "loadgraph.h"

const IntList intNil = 0;

IntList* initedges(int n) {
  IntList* adjvertices = malloc(sizeof(IntList *) * (n + 1));
  for (int i =1; i <= n; i++) {
    adjvertices[i] = intNil;
  }
  return adjvertices;
}

int loadedges(char* inbuf, IntList* adjvertices) {
  FILE *fp;
  int num = 0;
  char line[1000];
  fp = fopen(inbuf, "r");
  if (fp == NULL) {
    printf("no file");
    exit(1);
  }
  while (fgets(line, 1000, fp) != NULL) {
    edge e = parseedge(line);
    adjvertices[e.from] = cons(e.to, adjvertices[e.from]);
    num++;
  }
  fclose(fp);
  return num;
}

edge parseedge(char line[]) {
  edge newE;
  int numfields;
  numfields = sscanf(line, " %d %d %lf %*s",
		     &newE.from, &newE.to, &newE.weight);
  if (numfields < 2 || numfields > 3) {
    printf("bad edge");
    exit(1);
  }
  if (numfields == 2)
    newE.weight = 0.0;
  return newE;
}

void printlist(IntList list) {
  for (IntList curr = list; curr != NULL; curr->next)
    printf("%d ", curr->element);
}
  
  
