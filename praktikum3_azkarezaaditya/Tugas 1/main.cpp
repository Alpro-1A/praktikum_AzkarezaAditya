#include <iostream>

using namespace std;

int main()
{
    int nilai;
    cout << "Masukkan Nilai: ";
    cin >> nilai;  // nilai di input

    if (nilai >= 90) {
    cout << "Anda mendapatkan nilai A, Selamat!" << endl;   //Jika lebih dari 90 akan mendapat nilai A.

    } else if (nilai >= 80 && nilai < 90) {
    cout << "Anda mendapatkan nilai B, Kerja bagus!" << endl;    //Jika lebih dari atau sama dengan 80 dan kurang dari 89 akan mendapat nilai B.

    } else if (nilai >= 70 && nilai < 80) {
    cout << "Anda mendapatkan nilai C, Lumayan." << endl;    //Jika lebih dari atau sama dengan 70 dan kurang dari 79 akan mendapat nilai C.

    } else if (nilai >= 60 && nilai < 70) {
    cout << "Anda mendapatkan nilai D, Tetap semangat!" << endl;    //Jika lebih dari atau sama dengan 60 dan kurang dari 69 akan mendapat nilai D.

    } else if (nilai >= 0 && nilai < 60)  {
    cout << "Anda mendapatkan nilai E. Jangan menyerah!" << endl;    //Jika dibawah 60 akan mendapat nilai E.

    } else {
    cout << "Ora Ono Iki Tok"; // Output yang dihasilkan jika Input tidak sesuai dengan yang ditentukan.
    }
    return 0;
}
