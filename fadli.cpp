#include<iostream>
#include<string>
using namespace std;
int main (){
	char Hasil;
	float P,Q,C;
	cout << "SILAHKAN PILIH MENU YANG ANDA INGINKAN\n";
	cout << " \t1. PERTAMBAHAN \n";
	cout << " \t2. PENGURANGAN \n";
	cout << " \t3. PERKALIAN \n";
	cout << " \t4. PEMBAGIAN \n";
	cout << "\nPilih Menu No : "; cin >> Hasil;
	if (Hasil == '1'){
		cout << "\nMasukkan Bilangan Pertama : "; cin >> P;
		cout << "Masukkan Bilangan Kedua : "; cin >> Q;
		C=P+Q;
		cout << "Hasil "<< P << " + " << Q << " = "<<C;
	}
	else if (Hasil == '2'){
		cout << "\nMasukkan Bilangan Pertama : "; cin >> P;
		cout << "Masukkan Bilangan Kedua : "; cin >> Q;
		C=P-Q;
		cout << "Hasil "<< P << " - " << Q << " = "<<C;
	}
	else if (Hasil == '3'){
		cout << "\nMasukkan Bilangan Pertama : "; cin >> P;
		cout << "Masukkan Bilangan Kedua : "; cin >> Q;
		C=P*Q;
		cout << "Hasil "<< P << " x " << Q << " = "<<C;
	}
	else if (Hasil == '4'){
		cout << "\nMasukkan Bilangan Pertama : "; cin >> P;
		cout << "Masukkan Bilangan Kedua : "; cin >> Q;
		C=P/Q;
		cout << "Hasil "<< P << " : " << Q << " = "<<C;
	}
	else {
		cout << "Pilihan tidak tersedia";
	}
	return 0;
}
