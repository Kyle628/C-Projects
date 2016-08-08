/* intList.h
 * (The purpose for this header file is to declare all of the functions that
    we wish to use in creating our ADT)
 */

#ifndef C101IntList
#define C101IntList
/* Multiple typedefs for the same type are an error in C. */

typedef struct IntListNode * IntList;

struct IntListNode {
  int element;
  IntList next;
};

/** intNil denotes the empty IntList */
extern const IntList intNil;

/* Access functions
 * (The list must not be empty to access it)
 */

/** first
 */
int intFirst(IntList oldL);

/** rest
 */
IntList intRest(IntList oldL);

/* Constructors
 * (The constructor requires one new element and a previous list to work with
    (we can use intnil to start from scratch) the function returns a new list)
 */

/** cons
 */
IntList intCons(int newE, IntList oldL);

#endif

