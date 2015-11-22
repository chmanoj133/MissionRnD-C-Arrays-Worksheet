/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>

void * sortedArrayPositionsChange(int *Arr, int len)
{
	int i, temp, temp1, temp2, count = 0;

	if (len < 0 || Arr == NULL)
		return NULL;
	else
	{
		for (i = 0; i < len - 1; i++)
		{
			if (Arr[i] > Arr[i + 1])
			{
				if (count == 0)
				{
					temp1 = i;
					count++;
				}
				else
				{
					temp2 = i + 1;
					count++;
				}
			}
		}
		if (count > 2)
			return NULL;
		else if (count == 2)
		{
			temp = Arr[temp1];
			Arr[temp1] = Arr[temp2];
			Arr[temp2] = temp;
		}
		else if (count == 1) //condition if the unsorted elements Are adjacent
		{
			temp = Arr[temp1];
			Arr[temp1] = Arr[temp1 + 1];
			Arr[temp1 + 1] = temp;
		}
		return Arr;
	}
}