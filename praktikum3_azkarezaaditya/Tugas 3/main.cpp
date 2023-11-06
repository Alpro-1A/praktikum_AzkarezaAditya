#include <iostream>

using namespace std;

int main()
{
    int pilih;
    float p, l, a, t; // inputkan nilai angka panjang (p), lebar (l), alas (a), tinggi (t)

    // pilihan - pilihan case

    cout << "1. Persegi" << endl;
    cout << "2. Persegi Panjang" << endl;
    cout << "3. Segitiga" << endl;
    cout << "Pilihlah bangun datar yang akan dihitung luasnya: "; // menentukan luas bangun datar yg akan ditentukan
    cin >> pilih;

    switch (pilih) {  // mencari pilihan diantara 3 case dibawah
        case 1:
            cout << "Masukkan panjang sisi persegi: ";
            cin >> p; // menginput nilai angka panjang sisi persegi
            cout << "Luasnya adalah: " << p * p << endl;    // menghitung luas persegi
            break;
        case 2:
            cout << "Masukkan panjang: ";
            cin >> p; // menginput nilai panjang sisi persegi panjang
            cout << "Masukkan lebar: ";
            cin >> l; // menginput nilai lebar sisi persegi panjang
            cout << "Luasnya adalah " << p * l << endl; // menghitung luas persegi panjang
            break;
        case 3:
            cout << "Masukkan alas: ";
            cin >> a;  // menginput nilai alas segitiga
            cout << "Masukkan tinggi: ";
            cin >> t;  // menginput nilai tinggi segitiga
            cout << "Luasnya adalah: " << 0.5 * a * t << endl;  // menghitung luas seggitiga
            break;
        default:
            cout << "Tidak valid." << endl; // Jika tidak memilih salah satu case dinyatakan tidak valid
    }

    return 0;
}
