#include "mylist.h"

int main()
{
    listSingle L;
    adrSingle P;
    infotype dataCari, data;
    int jumlahData;

    create_list(L);

    /*P = alokasi('A');
    insertLast(L, P);

    P = alokasi('B');
    insertLast(L, P);

    P = alokasi('A');
    insertLast(L, P);

    show(L);
    dataCari = 'A';
    i = countX(L, dataCari);
    cout << i << endl; */


    for (int i = 0; i < 10; i++) {
        cout << "Masukkan data : ";
        cin >> data;

        P = alokasi(data);
        insert_last(L, P);
    }

    cout << "------------" << endl;
    show(L);
    cout << "------------" << endl;

    cout << "Masukkan char yang akan dicari : ";
    cin >> dataCari;

    jumlahData = countX(L, dataCari);
    cout << "Jumlah char : " << jumlahData << endl;

    cout << "------------" << endl;
    // Angka akhir NIM = 9 hapus 9 data terbelakang
    for (int i = 10; i > 1; i--) {
        delete_last(L);
    }

    show(L);
}
