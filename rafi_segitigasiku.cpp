#include <stdio.h>
#include <math.h>

int main(){
	// Mendeklarasikan panjang sisi alas dan sisi tinggi
	double alas = 4.0; // Panjang sisi alas dalam Cm 
	double tinggi = 5.0; // Panjang sisi tinggi dalam Cm
	double miring; // Panjag sisi miring 
	
	//Menghitung sisi miring menggunakan rumus pythagoras
	miring = sqrt(pow(alas, 2) + pow(tinggi, 2));
	
	// Menampilkan Hasil
	printf("Panjang sisi Miring segitiga siku-siku adalah: %.2f cm\n",miring);
	
	return 0;
}
