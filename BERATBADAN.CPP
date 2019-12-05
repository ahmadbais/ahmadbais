#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
class b
{
public :
pembuka ();
input ();
proses ();

private :
int z;
float berat;
};

b::pembuka()
{
	cout<<"================================="<<endl;
	cout<<"--Program konversi satuan berat--"<<endl;
	cout<<"================================="<<endl;
}
 
b::input () 
{ 
cout<<" Konversi Satuan Berat\n "<<endl;

cout << " 1  Untuk Gram ke Ons		" <<  endl; 
cout << " 2  Untuk Gram ke Kilogram	" <<  endl; 
cout << " 3  Untuk Gram ke Kwintal	" <<  endl; 
cout << " 4  Untuk Gram ke Ton		" <<  endl; 
cout << " 5  Untuk Ons ke Gram		" <<  endl; 
cout << " 6  Untuk Ons ke Kilogram	" <<  endl; 
cout << " 7  Untuk Ons ke Kwintal	" <<  endl; 
cout << " 8  Untuk Ons ke Ton		" <<  endl; 
cout << " 9  Untuk Kilogram ke Gram	" <<  endl; 
cout << " 10 Untuk Kilogram ke Ons	" <<  endl; 
cout << " 11 Untuk Kilogram ke Kwintal	" <<  endl; 
cout << " 12 Untuk Kilogram ke Ton	" <<  endl; 
cout << " 13 Untuk Kwintal ke Gram	" <<  endl; 
cout << " 14 Untuk Kwintal ke Ons	" <<  endl; 
cout << " 15 Untuk Kwintal ke Kilogram	" <<  endl; 
cout << " 16 Untuk Kwintal ke Ton	" <<  endl; 
cout << " 17 Untuk Ton ke Gram		" <<  endl; 
cout << " 18 Untuk Ton ke Ons		" <<  endl; 
cout << " 19 Untuk Ton ke Kilogram	" <<  endl; 
cout << " 20 Untuk Ton ke Kwintal" <<  endl;
cout << " 21 Keluar" <<endl; 
 
cout<<" Pilih Konversi :";
cin>>z;
cout<<endl;
}
 
b::proses () 
{ 
switch (z) 
{ 
	case 1: 
			cout << " Konversi Gram ke Ons "	<< endl;
			cout << " Masukkan satuan berat : "; cin >> berat;
			cout << " => " << berat << " gr = " << (berat/100) << " ons "		<< endl;break; 
 
	case 2: 
			cout << " Konversi Gram ke Kilogram "	<< endl; 
			cout << " Masukkan satuan berat : "; cin >> berat; 
			cout << " => " << berat << " gr = " << (berat/1000) << " kg "		<< endl;break; 
 
	case 3: 
			cout << " Konversi Gram ke Kwintal "	<< endl; 
			cout << " Masukkan satuan berat : "; cin >> berat; 
cout << " => " << berat << " gr = " << (berat/10000) << " kw " 		<< endl;break; 
 
case 4: 
cout << " Konversi Gram ke Ton " 	<< endl; 
cout << " Masukkan satuan berat : "; cin >> berat; 
cout << " => " << berat << " gr = " << (berat/1000000) << " ton " 	<< endl;break; 
 
case 5: 
cout << " Konversi Ons ke Gram " 	<< endl; 
cout << " Masukkan satuan berat : "; cin >> berat; 
cout << " => " << berat << " ons = " << (berat*10) << " gr " 		<< endl;break; 
 
case 6: 
cout << " Konversi Ons ke Kilogram " 	<< endl; 
cout << " Masukkan satuan berat : "; cin >> berat; 
cout << " => " << berat << " ons = " << (berat/10) << " kg " 		<< endl;break; 
 
case 7: 
cout << " Konversi Ons ke Kwintal " 	<< endl; 
cout << " Masukkan satuan berat : "; cin >> berat; 
cout << " => " << berat << " ons = " << (berat/100) << " kw " 		<< endl;break; 
 
case 8: 
cout << " Konversi Ons ke Ton " 	<< endl; 
cout << " Masukkan satuan berat : "; cin >> berat; 
cout << " => " << berat << " ons = " << (berat/10000) << " ton " 	<< endl;break; 
 
case 9: 
cout << " Konversi Kilogram ke Gram " 	<< endl; 
cout << " Masukkan satuan berat : "; cin >> berat; 
cout << " => " << berat << " kg = " << (berat*1000) << " gr " 		<< endl;break; 
 
case 10: 
cout << " Konversi Kilogram ke Ons "	<< endl; 
cout << " Masukkan satuan berat : "; cin >> berat; 
cout << " => " << berat << " kg = " << (berat*10) << " ons " 		<< endl;break; 
 
case 11: 
cout << " Konversi Kilogram ke Kwintal "<< endl; 
cout << " Masukkan satuan berat : "; cin >> berat; 
cout << " => " << berat << " kg = " << (berat/100) << " kw " 		<< endl;break; 
 
case 12: 
cout << " Konversi Kilogram ke Ton " 	<< endl; 
cout << " Masukkan satuan berat : "; cin >> berat; 
cout << " => " << berat << " kg = " << (berat/1000) << " ton " 		<< endl;break; 
 
case 13: 
cout << " Konversi Kwintal ke Gram "	<< endl; 
cout << " Masukkan satuan berat : "; cin >> berat; 
cout << " => " << berat << " kw = " << (berat*10000) << " gr " 		<< endl;break; 
 
case 14: 
cout << " Konversi Kwintal ke Ons " 	<< endl; 
cout << " Masukkan satuan berat : "; cin >> berat; 
cout << " => " << berat << " kw = " << (berat*100) << " ons " 		<< endl;break; 
 
case 15: 
cout << " Konversi Kwintal ke Kilogram "<< endl; 
cout << " Masukkan satuan berat : "; cin >> berat; 
cout << " => " << berat << " kw = " << (berat*100) << " kg " 		<< endl;break; 
 
case 16: 
cout << " Konversi Kwintal ke Ton " 	<< endl; 
cout << " Masukkan satuan berat : "; cin >> berat; 
cout << " => " << berat << " kw = " << (berat/10) << " ton " 		<< endl;break; 
 
case 17: 
cout << " Konversi Ton ke Gram	 " 	<< endl; 
cout << " Masukkan satuan berat : "; cin >> berat; 
cout << " => " << berat << " ton = " << (berat*1000000) << " gr " 	<< endl;break; 
 
case 18: 
cout << " Konversi Ton ke Ons " 	<< endl; 
cout << " Masukkan satuan berat : "; cin >> berat; 
cout << " => " << berat << " ton = " << (berat*10000) << " ons " 	<< endl;break; 
 
case 19: 
cout << " Konversi Ton ke Kilogram " 	<< endl; 
cout << " Masukkan satuan berat : "; cin >> berat; 
cout << " => " << berat << " ton = " << (berat*1000) << " kg " 		<< endl;break; 
 
case 20: 
cout << " Konversi Ton ke Kwintal\n " 	<< endl; 
cout << " Masukkan satuan berat : "; cin >> berat; 
cout << " => " << berat << " ton = " << (berat*10) << " kw " 		<< endl;break; 

case 21:
exit(0); 
default: 
cout << " Maaf.. Inputan salah " 		<< endl; 
} 
}
 
int main () 
{ 
b x; 
x.pembuka (); 
x.input (); 
x.proses (); 

getch();
system("CLS");
return main();
}
