#ifndef _loadgraph_h
#define _loadgraph_h

#include <stdio.h>
#include "intList.h"

/* typedef struct edge * edge;
   messing with the way parseedge is written to use sscanf */

typedef struct edge {
  int from;
  int to;
  double weight;
} edge;

IntList* initedges(int n);

int loadedges(char* inbuf, IntList* adjvertices);

edge parseedge(char line[]);

int parsen(char line[]);

void printlist(IntList);


#endif
