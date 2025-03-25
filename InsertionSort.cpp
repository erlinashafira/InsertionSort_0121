#include <iostream>
using namespace std;

int arr[20]; //Membuat Array dengan panjang data 20
int n; // Mmembuat Variable inputan n

void input()
{ // Procedure Input
    while (true)
{
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

for (int i = 0; i < n; i++)
{
    cout <, "Data ke-" << (i +1) << ": "; // Memasukkan atau menginputkan nilai data n
    cin >> arr[i]; // Myimpan nilai data n kedalam array arr
}
}

void inseertionSort()
{ // Procedure Insertionsort

    int temp; // Membuat variable data temporer atau penyimpanan sementara
    int j, i; // Membuat variable j sebagai penanda
    
    for (i = 1; i <= n - 1; i++)
    { // Step 1
        
    temp = arr[i]; // Step 2

    j = i - 1; // Step 3
    
while (j >= 0 && arr[j] > temp) // Step 4
{
    arr[j + 1] = arr[j]; //Step 4a
    j--; // Step 4b
}

}
}