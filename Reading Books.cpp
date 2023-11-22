#include <iostream>

using namespace std;

int main(){
    int jumlah_Buku, waktu, jumlah, total;

    cout << "Jumlah buku: ";
    cin >> jumlah_Buku;

    for (int i = 1; i <= jumlah_Buku; i++)
    {
        cout << "Waktu membaca buku ke-" << i << ": ";
        cin >> waktu;
        jumlah += waktu;
    }
    total = jumlah + jumlah_Buku;
    cout << "Total waktu minimum yang diperlukan: " << total << endl;

    system("pause");
    return 0;
}