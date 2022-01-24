#include <stdio.h>
#include <limits.h>

int main()
{
	int var = 4;
	printf("%d\n", var);

	{
		int var2 = 5;
		printf("%d", var2);
	}
}

