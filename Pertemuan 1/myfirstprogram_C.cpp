#include <stdio.h> // library c

int main() {
    // deklarasi variabel [50] panjang karakter
    char nama[50],a1[50];
    int nim;
    char kom;
    float ip;

// dari line 10 - 20 akan meminta user untuk memasukkan inputan
 // printf untuk output program
 // scanf untuk user input ke program
    printf("Masukkan Nama anda : ");
    scanf("%s",&nama);

    printf("Masukkan NIM anda : ");
    scanf("%d",&nim);

    printf("Masukkan KOM anda : ");
    scanf("%s",&kom);

    printf("Masukkan IP anda : ");
    scanf("%f",&ip);

    // Menampilkan hasil inputan user
    printf("Nama : %s\n",nama);
    printf("NIM : %d\n",nim);
    printf("KOM : %c\n",kom);
    printf("IP : %.2f\n",ip); // // Menampilkan IP dengan 2 desimal
}
