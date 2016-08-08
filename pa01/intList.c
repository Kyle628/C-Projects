#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "intlist.h"

const IntList intNil = 0;

int intFirst(IntList oldL) {
  return oldL->element;
}

IntList intRest(IntList oldL) {
  return oldL->next;
}

IntList intCons(int newE, IntList oldL) {
  IntList newL = malloc(sizeof(struct IntListNode));
  newL->element = newE;
  newL->next = oldL;
  return newL;
}
