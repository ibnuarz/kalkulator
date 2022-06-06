#include <iostream>
using namespace std;
int a,b;
float hsl;
float bil1,bil2;
float jmlh(float bil1,float bil2){
	return (bil1+bil2);
}
float krg(float bil1,float bil2){
	return (bil1-bil2);
}
float kali(float bil1,float bil2){
	return (bil1*bil2);
}
float bagi(float bil1,float bil2){
	return (bil1/bil2);
}
float mod(int a,int b){
	hsl = a%b;
	return hsl;
}
void menu();
void menumod();
int main(){
	int pil;
	cout<<"Program Kalkulator sederhana"<<endl;
	cout<<"Menu pilihan : "<<endl;
	cout<<"1. penjumlahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"5. Modulus"<<endl;
	cout<<"pilihan anda : "<<endl;
	cin>>pil;
	switch (pil){
		case 1 :
		system("cls");
		cout<<"Penjumlahan"<<endl;
		menu();
		cout<<"Hasil perhitungan : "<<jmlh(bil1,bil2);
		break;
		case 2 :
		system("cls");
		cout<<"Pengurangan"<<endl;
		menu();
		cout<<"Hasil perhitungan : "<<krg(bil1,bil2);
		break;
		case 3 :
		system("cls");
		cout<<"Perkalian"<<endl;
		menu();
		cout<<"Hasil perhitungan : "<<kali(bil1,bil2);
		break;
		case 4 :
		system("cls");
		cout<<"Pembagian"<<endl;
		menu();
		cout<<"Hasil perhitungan : "<<bagi(bil1,bil2);
		break;
		case 5 :
		system("cls");
		cout<<"Modulus"<<endl;
		menumod();
		cout<<"Hasil perhitungan : "<<mod(a,b);
		break;
		default :
		cout<<"Pilihan anda tidak di dalam menu"<<endl;
	}
	return 0;
}
void menu() {
		cout<<"Masukkan bilangan pertama : "<<endl;
		cin>>bil1;
		cout<<"Masukkan bilangan kedua : "<<endl;
		cin>>bil2;
}
void menumod(){
	cout<<"Masukkan bilangan pertama : "<<endl;
	cin>>a;
	cout<<"Masukkan bilangan kedua : "<<endl;
	cin>>b;
}
