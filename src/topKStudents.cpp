/*
OVERVIEW:  You are given scores for students of a class in alphabetical order. Write a function that returns the names and scores of top K students.
Input is array of structures of type student (each student has name and score).
E.g.: If input is [ { "stud1", 20 }, { "stud2", 30 }, { "stud3", 40 } ] (three students with marks 20, 30 , 40) and K value is 2.
return top 2 students [ { "stud2", 30 }, { "stud3", 40 } ]

INPUTS: array of structures of type student, length of the array, integer K.

OUTPUT: Return top K students from array. Output need not be in decreasing order of scores.

ERROR CASES: Return NULL for invalid inputs.

NOTES:
*/

#include <iostream>
#include <malloc.h>

struct student {
	char *name;
	int score;
};

struct student ** topKStudents(struct student *students, int len, int K) {
	struct student **ptr;
	
	if (students == NULL)
		return NULL;
	if (len <= 0 || K <= 0)
		return NULL;
	else{
		if (K > len)
			K = len;
		//else if (K <= 0)
		//return NULL;
		//else

		for (int i = 0; i < len; i++)
		{
			for (int j = 0; j < len; j++)
			{
				if (students[i].score > students[j].score)
				{
					struct student temp = students[i];
					students[i] = students[j];
					students[j] = temp;
				}
			}
		}
		ptr = (struct student **)malloc(K*sizeof(student));
		for (int i = 0; i < K; i++)
		{
			ptr[i] = &students[i];
		}
		return ptr;
	}
	}
	