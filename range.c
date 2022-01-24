/*
 * This program is written in C by Frey0xD on 23-01-2022
 * covering the lecture L-10
*/


#include <stdio.h>
#include <limits.h>

int main()
{
	unsigned int var7 = 4294967295;
	unsigned int var8 = 49203950752759;
	char h_1 = 'F';
	char h_2 = 70;
	int var1 = INT_MIN;
	int var2 = INT_MAX;
	unsigned int var3 = 0;
	unsigned int var4 = UINT_MAX;
	short int var5 = SHRT_MIN;
	short int var6 = SHRT_MAX;

	printf("so let's check out all the ranges :- \n 1. Integer range is from %d to %d \n unsigned is from %d to %d \n short is from %d to %d", var1, var2, var3, var4, var5, var6);
	printf("\n");
	printf("%d\n", var7);
	printf("%d\n", var8);

	return 0;
}
