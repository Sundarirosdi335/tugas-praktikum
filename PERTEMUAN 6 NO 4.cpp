#include <stdio.h>
int main()
{
	printf ("## Program Bahasa C Mencetak Berapa Meter Tempuh Bersepeda ## \n");
	printf ("================================== \n\n");
	
	int kecepatan = 2;
	int waktu = 100;
	int jarak = kecepatan * waktu;
	
	printf("Jarak yang ditempuh setelah %d detik : %d meter \n", waktu,jarak);
	return 0;
}
