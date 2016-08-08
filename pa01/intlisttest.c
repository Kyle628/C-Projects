#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "intlist.h"

const IntList intNil = 0;

int main(void) {
  IntList testlist = intCons(3, intNil);
  IntList testlist2 = intCons(4, testlist);
  printf("%d", intFirst(testlist2));
}
