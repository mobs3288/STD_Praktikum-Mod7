#include "mylist.h"

void create_list(listSingle &L) {
    first(L) = nil;
}

adrSingle alokasi(infotype new_data) {
    adrSingle P = new elmtSingle;

    info(P) = new_data;
    next(P) = nil;

    return P;
}

void insert_last(listSingle &L, adrSingle P) {
    adrSingle Q;

    if (first(L) == nil) {
        first(L) = P;
    } else {
        Q = first(L);

        while (next(Q) != nil) {
            Q = next(Q);
        }
        next(Q) = P;
    }

}

adrSingle delete_last(listSingle &L) {
    adrSingle P;
    adrSingle Q;

    if (first(L) == nil) {
        cout << "LIST KOSONG" << endl;
        P = nil;
    } else if (next(first(L)) == nil) {
        P = first(L);
        first(L) = nil;
    } else {
        Q = first(L);
        while (next(next(Q)) != nil) {
            Q = next(Q);
        }
        P = next(Q);
        next(Q) = nil;
    }

    return P;
}

// Akhir NIM = 9 Mod 3 = 0 fungsi yang dibuat adalah countX
int countX(listSingle L, infotype x) {
    adrSingle P;
    int i = 0;

    P = first(L);
    while (P != nil) {
        if (info(P) == x) {
            i++;
        }
        P = next(P);
    }

    return i;
}

void show(listSingle L) {
    adrSingle P;

    P = first(L);
    while (P != nil) {
        cout << info(P) << endl;
        P = next(P);
    }
}
