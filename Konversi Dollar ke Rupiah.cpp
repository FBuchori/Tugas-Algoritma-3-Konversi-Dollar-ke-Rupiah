#include <stdio.h>
#include <conio.h>
int main ()
{
	long rupiah=14500,dollar,kurs;
	printf("masukkan nilai dollar $USD : ");scanf("%d", &dollar);
	kurs=rupiah*dollar;
	printf("kurs = %i * %i = RP %i", dollar,rupiah,kurs);
	getch();
}
