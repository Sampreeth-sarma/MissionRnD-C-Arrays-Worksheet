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
	if (len < 0)
		return NULL;
	else if (Arr == NULL)
		return NULL;
	int temp = Arr[0],i,low=-1,high=-1;

	
	
	for ( i = 1; i < len; i++)
	{
		if (Arr[i] < temp){
			low = (i - 1); break;
		}
		else
			temp = Arr[i];


	}
	temp = Arr[i];
	for (int j = i+1; j < len; j++)
	{
		if (temp>Arr[j]){
			high = (j); break;
		}
		else
			temp = Arr[j];
	}
	if (low >= 0 && high >= 0)
	{
		temp = Arr[low];
		Arr[low] = Arr[high];
		Arr[high] = temp;
	}
	
}