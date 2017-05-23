#include "header.h"

int carPosition(unsigned int parkingRow)
{
	int ret = -1;

	while (parkingRow)
	{
		parkingRow >>= 1;
		ret++;
	}
	return ret;
}
