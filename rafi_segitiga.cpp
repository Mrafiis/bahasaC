#include <stdio.h>

int main(){
	//deklarasi variabel
	float alas = 8; //panjang alas segitigas
	float tinggi = 5; //tinggi segitiga
	float luas; //variabel untuk menyimpan luas segtiga
	
	//menghitung luas segitiga
	luas = 0.5 * alas * tinggi;
	
	//menampilkan hasil
	printf("Luas segitiga dengan alas %.2f cm dan tinggi %.2f cm adalah %.2f cm^2\n",alas,tinggi,luas);
	
	return 0;
}
