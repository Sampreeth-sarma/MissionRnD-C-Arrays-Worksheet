/*
OVERVIEW:  given an array that has duplicate values remove all duplicate values.
E.g.: input: [1, 1, 2, 2, 3, 3], output [1, 2, 3]

Ex 2: [4,4,2,2,1,5] output : [4,2,1,5]

INPUTS: Integer array and length of the array .

OUTPUT: Update input array by removing duplicate values and return the final array length

ERROR CASES: Return -1 for invalid inputs.

NOTES: Don't create new array, try to change the input array.
*/

#include <stdio.h>

int removeArrayDuplicates(int *Arr, int len)
{
	int i ,l=0;
	if (Arr == NULL)
	{
		return -1;
	}
	else if (len < 0)
	{
		return -1;
	}
	else
	{

			for (i = 0; i < len; i++)
			{
				for (int j = 0; j < len; j++)
				{
					if (Arr[i]<Arr[j]){
						int temp = Arr[i]; Arr[i] = Arr[j]; Arr[j] = temp;
					}
				}
			}
			int temp = Arr[0], count = 1;
			for (i = 1; i < len; i++)
			{
				if (temp != Arr[i]){
					temp = Arr[i];  Arr[count] = Arr[i]; count++;
				}
			}

			return count;
		
	}
}