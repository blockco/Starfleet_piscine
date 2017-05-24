#include <stdlib.h>
#include <stdio.h>
#include "header.h"

int **pianoDecompress(struct s_bit *bit, int l)
{
	int i;
	int **ret;

	i = 0;
	ret = malloc((sizeof(int*) * l) + 1);
	ret[l] = 0;
	// while (i < l)
	// {
		int j = 0;
		while (j < bit->n)
		{
			printf("%d ", bit->arr[j]);
			j++;
		}
	// }
	return NULL;
}
