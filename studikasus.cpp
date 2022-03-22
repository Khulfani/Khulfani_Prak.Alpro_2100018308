//BAGIAN 1
#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
float pertalite(float x){
	float hasil;
	return hasil = x * 7000 ;
}
float pertamax(float x){
	float hasil;
	return hasil = x * 9000;
}
int main(){
	string nama,bensin;
	int pil,hrg;
	float liter,harga;
	cout << "Program SPBU\n";
	cout << "Masukkan nama anda : "; cin  >> nama;
	cout << "Jenis bensin :\n";
	cout << "1.Pertalite \n2.Pertamax\n";
	cout << "Masukkan pilihan jenis bensin : ";
	cin >> pil;
	if (pil == 1){
		bensin = "Pertalite";
		hrg = 7000;
		cout << "Masukkan jumlah liter : " ;
		cin >> liter;
		harga = pertalite(liter);
	}
	else if (pil == 2){
		bensin = "Pertamax";
		hrg = 9000;
		cout << "Masukkan jumlah liter : " ;
		cin >> liter;
		harga = pertamax(liter);
	}
}
