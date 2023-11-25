#include <stdio.h>
int main()
{
	printf ("## Program Bahasa C Deret Angka ## \n");
	printf ("================================== \n\n");
	{
		for (int i = 100; i >= 55; i-=5)
		printf("%d ",i);
	}
	return 0;
}
