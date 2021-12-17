#ifndef MYLIST_H_INCLUDED
#define MYLIST_H_INCLUDED
#include <iostream>

using namespace std;

#define info(P)     (P) -> info
#define next(P)     (P) -> next
#define first(L)    ((L).first)
#define last(L)     ((L).last)
#define nil NULL

// Akhir NIM = 9 Mod 3 = 0 data yang disimpan char
typedef char infotype;
typedef struct elmtSingle *adrSingle;

struct elmtSingle {
    infotype info;
    adrSingle next;
};

struct listSingle {
    adrSingle first;
};

void create_list(listSingle &L);
adrSingle alokasi(infotype new_data);
void insert_last(listSingle &L, adrSingle P);
void show(listSingle L);
int countX(listSingle L, infotype x);
adrSingle delete_last(listSingle &L);


#endif // MYLIST_H_INCLUDED
