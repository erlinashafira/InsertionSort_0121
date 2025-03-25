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
}