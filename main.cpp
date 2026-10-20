#include "Doublylist.h"

int main() {
    List L;
    createList(L);

    infotype data;
    address P, found;

    // Input data kendaraan
    for (int i = 0; i < 4; i++) {
        cout << "masukkan nomor polisi: ";
        cin >> data.nopol;
        cout << "masukkan warna kendaraan: ";
        cin >> data.warna;
        cout << "masukkan tahun kendaraan: ";
        cin >> data.thnBuat;

        // Cek apakah nomor polisi sudah terdaftar
        found = findElm(L, data);
        if (found != Nil) {
            cout << "nomor polisi sudah terdaftar" << endl << endl;
        } else {
            P = alokasi(data);
            insertLast(L, P);
            cout << endl;
        }
    }

    cout << "DATA LIST 1" << endl << endl;
    printInfo(L);
    cout << endl;

    // Cari nomor polisi
    string cariNopol;
    cout << "Masukkan Nomor Polisi yang dicari : ";
    cin >> cariNopol;
    data.nopol = cariNopol;
    found = findElm(L, data);

    if (found != Nil) {
        cout << "Nomor Polisi : " << found->info.nopol << endl;
        cout << "Warna        : " << found->info.warna << endl;
        cout << "Tahun        : " << found->info.thnBuat << endl << endl;
    } else {
        cout << "Data tidak ditemukan." << endl << endl;
    }

    // Hapus elemen dengan nomor polisi
    string hapusNopol;
    cout << "Masukkan Nomor Polisi yang akan dihapus : ";
    cin >> hapusNopol;
    data.nopol = hapusNopol;
    found = findElm(L, data);

    if (found != Nil) {
        if (found == L.First) {
            deleteFirst(L, P);
        } else if (found == L.Last) {
            deleteLast(L, P);
        } else {
            deleteAfter(found->prev, P);
        }
        dealokasi(P);
        cout << "Data dengan nomor polisi " << hapusNopol << " berhasil dihapus." << endl << endl;
    }

    cout << "DATA LIST 1" << endl;
    printInfo(L);

    return 0;
}