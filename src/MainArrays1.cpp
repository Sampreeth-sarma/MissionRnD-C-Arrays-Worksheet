#include "FunctionHeadersArrays1.h"
#include <stdio.h>

int main(){

	//Test RemoveArraysDuplicates
	
	int arr[7] = { 1, 2, 3,4,1,2,3 };
	int len = removeArrayDuplicates(arr, 7);
	printf("%d", len);
	for (int i = 0; i < 4; i++)
		printf("%d/n", arr[i]);


	

	//Test Students Count
	
	int arr2[3]={1,4,10};
	int *newarray=sortedArrayInsertNumber(arr2, 3, 3);
	printf("%d %d %d %d", newarray[0], newarray[1], newarray[2],newarray[3]);
	


	return 0;
}