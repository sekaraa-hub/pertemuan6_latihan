#ifndef DOUBLYLIST_H_INCLUDED
#define DOUBLYLIST_H_INCLUDED

#include <iostream>
#include <string>

#define Nil NULL

using namespace std;

// Tipe data kendaraan
struct kendaraan {
    string nopol;
    string warna;
    int thnBuat;
};

typedef kendaraan infotype;
typedef struct ElmList *address;

// Struct elemen Doubly Linked List
struct ElmList {
    infotype info;
    address next;
    address prev;
};

// Struct List
struct List {
    address First;
    address Last;
};

// Prototipe Fungsi dan Prosedur
void createList(List &L);
address alokasi(infotype x);
void dealokasi(address P);
void printInfo(List L);
void insertLast(List &L, address P);

// Fungsi & Prosedur Latihan
address findElm(List L, infotype x);
void deleteFirst(List &L, address &P);
void deleteLast(List &L, address &P);
void deleteAfter(address Prec, address &P);

#endif // DOUBLYLIST_H_INCLUDED