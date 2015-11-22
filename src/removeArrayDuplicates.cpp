/*
OVERVIEW:  given an array that has duplicate values remove all duplicate values.
E.g.: input: [1, 1, 2, 2, 3, 3], output [1, 2, 3]

INPUTS: Integer array and length of the array.

OUTPUT: Update input array by removing duplicate values.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Don't create new array, try to change the input array.
*/

#include <stdio.h>

void * removeArrayDuplicates(int *Arr, int len)
{
	int i, j, temp_length = len;

	if (Arr == NULL || len < 0)
		return NULL;
	else
	{
		for (i = 0; i < len; i++)
		{
			for (j = i - 1; j >= 0; j--)
			{
				if (Arr[i] == Arr[j])
					Arr[i] = '\0';
			}
		}

		i = 0;
		while (i < temp_length)
		{
			if (Arr[i] == '\0')
			{
				for (j = i; j < temp_length; j++)
					Arr[j] = Arr[j + 1];
				Arr[temp_length - 1] = '\0';
				temp_length--;
			}

			if (Arr[i] != '\0')
				i++;
		}
		return Arr;
	}

}