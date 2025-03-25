#include <iostream>
using namespace std;

int arr[20]; //Membuat Array dengan panjang data 20
int n; // Mmembuat Variable inputan n

void input()
{ // Procedure Input
    while (true)

cout << "Masukkan Jumlah Data Array : "; //membuat Inputan jumlah element Array
cin >> n; // memanggil vaariable inputan n

if (n <= 20)
{ // Membuat Kondisi n tidak lebih dari 20
    break;
}
else
{
    cout << "\nArray yang anda masukkan maksimal 2 Elemen,\n"; // Menampilkan Pesan jika data lebih dari 20
}
}
cout << endl; // Membuat jarak per baris program 
cout << "======================" << endl;
cout << "Masukkan Element Array" << endl;
cout << "======================" << endl;