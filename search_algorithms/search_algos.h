#ifndef __SEARCH_ALGO_H__
#define __SEARCH_ALGO_H__

/*Libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif
