#include <iostream>
using namespace std;

int main() {
    float r,t,v;
    const float phi = 3.14;

    cout << "Masukkan jari - jari : ";
    cin >> r;
    cout << "Masukkan tinggi : ";
    cin >> t;
    v = phi * r *r *t;
    cout << "Volume tabung adalah : " << v;
}