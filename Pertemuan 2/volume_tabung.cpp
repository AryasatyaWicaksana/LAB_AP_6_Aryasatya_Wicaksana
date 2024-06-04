#include <iostream>
#define phi 3.14
using namespace std;

int main() {
    float r,t,v;

    cout << "Masukkan jari - jari : ";
    cin >> r;
    cout << "Masukkan tinggi : ";
    cin >> t;
    v = phi * r *r *t;
    cout << "Volume tabung adalah : " << v;
}