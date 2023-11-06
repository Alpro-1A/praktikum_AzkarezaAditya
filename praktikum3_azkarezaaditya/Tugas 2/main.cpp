#include <iostream>

using namespace std;

int main()
{
    int Var1, Var2, Var3; // Var1= Variabel 1 (angka1), Var2= Variabel 2 (angka2), Var3= Variabel 3 (angka3)
    cout << "Masukkan tiga variabel: ";
    cin >> Var1 >> Var2 >> Var3;

    // Process
    int terbesar = Var1;
    if (Var2 > terbesar) {
        terbesar = Var2;
    }
    if (Var3 > terbesar) {
        terbesar = Var3;
    }
    cout << "Angka terbesarnya adalah " << terbesar << endl; // Menmapilkan angka terbesar

    return 0;
}
