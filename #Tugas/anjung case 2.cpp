#include <iostream>
#include <conio.h> // Untuk getch() dan clrscr()

using namespace std;

// Fungsi untuk menghitung nilai akhir
float hitung_nilai_akhir(float NilaiKeaktifan, float NilaiUlangan, float NilaiUjian) {
    float nilai_murni_keaktifan = NilaiKeaktifan * 0.20;
    float nilai_murni_ulangan = NilaiUlangan * 0.50;
    float nilai_murni_ujian = NilaiUjian * 0.30;

    return nilai_murni_keaktifan + nilai_murni_ulangan + nilai_murni_ujian;
}

int main() {
    string nama_siswa;
    float NilaiKeaktifan, NilaiUlangan, NilaiUjian;

    // Layar masukkan
    cout << "PROGRAM HITUNG NILAI AKHIR" << endl;
    cout << "Nama Siswa: ";
    getline(cin, nama_siswa);
    cout << "Nilai Keaktifan: ";
    cin >> NilaiKeaktifan;
    cout << "Nilai Tugas: ";
    cin >> NilaiUlangan;
    cout << "Nilai Ujian: ";
    cin >> NilaiUjian;

    // Hitung nilai akhir
    float nilai_akhir = hitung_nilai_akhir(NilaiKeaktifan, NilaiUlangan, NilaiUjian);

    // Layar keluaran
    system("cls"); // Menghapus layar

    cout << "Siswa yang bernama " << nama_siswa << endl;
    cout << "Dengan Nilai Persentasi Yang dihasilkan." << endl;
    cout << "Nilai Keaktifan * 20%: " << NilaiKeaktifan * 0.20 << endl;
    cout << "Nilai Ulangan * 50%: " << NilaiUlangan * 0.50 << endl;
    cout << "Nilai Ujian * 30%: " << NilaiUjian * 0.30 << endl;
    cout << "Jadi Siswa yang bernama " << nama_siswa << " memperoleh nilai akhir sebesar " << nilai_akhir << endl;

    getch(); // Menahan layar keluaran
    return 0;
}
