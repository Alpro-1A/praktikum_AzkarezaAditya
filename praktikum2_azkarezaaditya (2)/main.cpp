#include <iostream>

using namespace std;

int main()
{
    //Menukar nilai variabel dengan variabel tambahan (temp)

    int firstValue = 10;
    int secondValue = 8;

    int temp = firstValue;
    firstValue = secondValue;
    secondValue = temp;

    cout << "First Value : " << firstValue << endl;
    cout << "Second Value : " << secondValue << endl;

    //Menukar nilai variabel tanpa variabel tambahan (temp)

    int a = 10;
    int b = 8;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "a : " << a << endl;
    cout << "b : " << b << endl;

    //Bebek Pak Tatang

    int N = 10;
    int M = 10;

    int jumlahBebek = N / M;
    int sisaBebek = N % M;

    cout << "jumlah bebek yang harus diberikan kepada masing-masing temannya : " << jumlahBebek << endl;
    cout << "jumlah sisanya : " << sisaBebek <<  endl;

    return 0;
}
