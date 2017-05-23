#include "header.h"

int isFilled(unsigned int parkingRow)
{
	unsigned int i = parkingRow;
	i = i + 1;
	return(!(parkingRow & i));
}
