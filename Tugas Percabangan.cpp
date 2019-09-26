#include <iostream>
#include <conio.h>
using namespace std;
int main (){
 int a,b,pil;
 int penjumlahan,pengurangan;
 float perkalian,pembagian;
 cout<<"------------------------ \n";
 cout<<" ---   Menu Perhitungan Matematika   --- \n";
 cout<<" ---   Ahmad Bais   --- \n";
 cout<<" ----------------------- \n\n";


 cout<<" [1] Penjumlahan \n";
 cout<<" [2] Pengurangan \n";
 cout<<" [3] Perkalian \n"; 
 cout<<" [4] Pembagian \n\n";
 cout<<" Masukkan Pilihan Anda : ";
 cin>>pil;
 if(pil==1){
 cout<<" Bilangan 1 = ";cin>>a;
 cout<<" Bilangan 2 = ";cin>>b;
 penjumlahan=a+b;
 cout<<" Hasilnya adalah : " <<penjumlahan;
 }
 else if (pil==2){
 cout<<" Bilangan 1 = ";cin>>a;
 cout<<" Bilangan 2 = ";cin>>b;
 pengurangan=a-b;
 cout<<" Hasilnya adalah : " <<pengurangan;
 }
 else if (pil==3){
 cout<<" Bilangan 1 = ";cin>>a;
 cout<<" Bilangan 2 = ";cin>>b;
 perkalian=a*b;
 cout<<" Hasilnya adalah : " <<perkalian;
 }
 else if (pil==4){
 cout<<" Bilangan 1 = ";cin>>a;
 cout<<" Bilangan 2 = ";cin>>b;
 pembagian=a/b;
 cout<<" Hasilnya adalah : " <<pembagian;
 }
 else{
  cout<<" Masukkan Anda Salah ";
 }
 getch();
 return 0;
}
