#include <iostream>
using namespace std;

int main() {
    int pilihan;
    float a, b;

    do {
        cout << "Kalkulator Sederhana" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilih menu (1-5): ";
        cin >> pilihan;

        if (cin.fail() || pilihan < 1 || pilihan > 5) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Input tidak valid!" << endl;
            continue;
        } else if (pilihan >= 1 && pilihan <=4 ) {
            cout << "Masukkan angka pertama: ";
            cin >> a;
            cout << "Masukkan angka kedua: ";
            cin >> b;
        } 
        
        switch (pilihan) {
            case 1:
                cout << "hasil = " << a + b << endl;
                break;
            case 2:
                cout << "hasil = " << a - b << endl;
                break;
            case 3:
                cout << "hasil = " << a * b << endl;
                break;
            case 4:
                if (b !=0) 
                    cout << "hasil = " << a / b << endl;
                else
                    cout << "Error: Tidak bisa dibagi nol" << endl;
                break;
            case 5:
                cout << "Terima kasih" << endl;
                break;
            default:
                cout << "Pilihan tidak valid" << endl;
        }

    } while (pilihan !=5);

    return 0;
}