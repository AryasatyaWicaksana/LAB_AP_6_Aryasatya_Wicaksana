#include <iostream>

using namespace std;

//* Fungsi untuk melakukan penjumlahan dua bilangan yang diakses melalui pointer
void penjumlahan(int* a, int* b) {
    *a += *b; // Menambahkan nilai yang ditunjuk oleh pointer b ke nilai yang ditunjuk oleh pointer a
    cout << *a << endl;
}

int main() {
    system("cls"); 

    //? Deklarasi Pointer
    int number = 16; // Variabel biasa dengan nilai 16
    int* ptrnumber = &number; // Pointer menunjuk ke alamat variabel number

    cout << "Isi variabel number : " << number << endl; // Menampilkan nilai variabel number
    cout << "Alamat variabel number : " << &number << endl; // Menampilkan alamat memori variabel number
    cout << "Isi variabel ptrnumber : " << ptrnumber << endl; // Menampilkan alamat yang ditunjuk oleh ptrnumber
    cout << "Isi variabel yang ditunjuk ptrnumber : " << *ptrnumber << endl; // Menampilkan nilai yang ditunjuk oleh ptrnumber
    cout << "Alamat variabel ptrnumber : " << &ptrnumber << endl; // Menampilkan alamat memori pointer ptrnumber

   
    *ptrnumber = 37; 
    cout << "Isi variabel number : " << number << endl;

    //? Pointer dalam Array
    int num[] = {1, 2, 3, 4, 5}; // Deklarasi array
    int* ptrnum = num; // Pointer menunjuk ke array

    cout << "Isi variabel num indeks 0 = " << num[0] << endl;
    cout << "Alamat memori variabel num indeks 0 = " << &num[0] << endl; 
    cout << "Isi variabel ptrnum = " << ptrnum << endl; 
    cout << "Isi variabel yang ditunjuk oleh ptrnum = " << *ptrnum << endl; 

    //? Pointer sebagai Parameter
    int a = 2;
    int b = 3;
    penjumlahan(&a, &b); // Memanggil fungsi penjumlahan dengan parameter pointer
    cout << a << endl; // Menampilkan hasil setelah penjumlahan

    //? Pointer ke Pointer
    int n = 4;
    int* ptrn = &n; // Pointer menunjuk ke variabel n
    int** ptr_ptrn = &ptrn; // Pointer ke pointer yang menunjuk ke ptrn

    cout << "Isi variabel n = " << n << endl; 
    cout << "Isi variabel ptrn = " << ptrn << endl;
    cout << "Isi variabel yang ditunjuk ptrn = " << *ptrn << endl;
    cout << "Isi variabel ptr_ptrn = " << ptr_ptrn << endl;
    cout << "Isi variabel yang ditunjuk oleh ptr_ptrn = " << *ptr_ptrn << endl;
    cout << "Isi variabel n diakses dari ptr_ptrn = " << **ptr_ptrn << endl;

    //? Pointer Dinamis
    int* ptr = new int; // Alokasi memori dinamis
    *ptr = 24; // Mengisi nilai pada memori yang dialokasikan
    cout << "Isi variabel ptr = " << ptr << endl;
    cout << "Data yang ada di variabel ptr = " << *ptr << endl; // Menampilkan nilai yang disimpan pada alamat tersebut
    delete ptr; // Dealokasi memori
    ptr = nullptr; // Menghindari dangling pointer
    cout << "Isi variabel ptr = " << ptr << endl; // Menampilkan alamat setelah dealokasi
    cout << "Data yang ada di variabel ptr = " << (ptr ? *ptr : 0) << endl; // Menampilkan nilai yang ada di alamat tersebut setelah dealokasi
}
