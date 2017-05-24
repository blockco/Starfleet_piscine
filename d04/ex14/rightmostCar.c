#include "header.h"

int rightmostCar(unsigned int parkingRow)
{
	int i;
	i = 0;

	if (parkingRow)
	{
		while (parkingRow & 1)
		{
			parkingRow >>= 1;
			i++;
		}
		return i;
	}
	return -1;
}
