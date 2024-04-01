#include <iostream>
#include <conio.h> // Untuk fungsi getch()
#include <cstdlib> // Untuk fungsi system("cls")

using namespace std;

double hitungRataRata(double ulangan1, double ulangan2, double ulangan3) {
    return (ulangan1 + ulangan2 + ulangan3) / 3;
}

int main() {
    // Variabel untuk menyimpan data siswa
    string NIM, NAMA;
    double nilaiUlangan1, nilaiUlangan2, nilaiUlangan3;

    // Layar Masukkan
    cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;
    cout << "Nim Siswa : ";
    cin >> NIM;
    cout << "Nama Siswa : ";
    cin.ignore(); // Membersihkan buffer
    getline(cin, NAMA);
    cout << "Nilai Ulangan I : ";
    cin >> nilaiUlangan1;
    cout << "Nilai Ulangan II : ";
    cin >> nilaiUlangan2;
    cout << "Nilai Ulangan III : ";
    cin >> nilaiUlangan3;

    // Menghitung rata-rata
    double rataRata = hitungRataRata(nilaiUlangan1, nilaiUlangan2, nilaiUlangan3);

    // Layar Keluaran menggunakan clrscr
    system("cls");

    // Menampilkan hasil
    cout << "Nim " << NIM << " Siswa yang bernama " << NAMA << endl;
    cout << "Memperoleh nilai rata-rata " << rataRata << " dari hasil ulangan yang diikutinya." << endl;

    // Menahan tampilan
   // cout << "Tekan tombol apa saja untuk keluar...";
    getch(); // Menunggu tombol ditekan

    return 0;
}
