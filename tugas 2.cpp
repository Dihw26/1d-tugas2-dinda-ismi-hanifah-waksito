#include <iostream>

using namespace std;

int main (){
    int a,t;
    float luas;

    cout << "Masukkan Panjang Tinggi: ";
    cin >> a;
    cout << "Masukkan Tinggi Segitiga: ";
    cin >> t;

    luas = 0.5*a*t;
    cout << "Luas segitiga adalah " << luas << endl;

    return 0;


}
