#include <iostream>

using namespace std;

int main() {
    int angka = 1;
    do {
        cout << angka << " ";
        angka++;
    } while(angka <= 10);

    angka = 1;
    do {
        cout << angka << " ";
        angka++;
    } while(angka > 10);
}