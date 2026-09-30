// FIN
// dri aslab

#include <iostream>
using namespace std;

int stack[5];
int top = -1;

void push(int data) {
    if (top == 4) {
        cout << "Stack penuh!" << endl;
        return;
    }
    top++;
    stack[top] = data;
}

void pop() {
    if (top == -1) {
        cout << "Stack kosong!" << endl;
        return;
    }
    cout << "Data yang di-pop: " << stack[top] << endl;
    top--;
}

void lihatTop() {
    if (top == -1){
        cout << "Stack kosong!" << endl;
    }
    else{
        cout << "Top: " << stack[top] << endl;
    }
}

void cekEmpty() {
    if (top == -1)
        cout << "Stack Empty" << endl;
    else
        cout << "Stack tidak Empty" << endl;
}

void cekFull() {
    if (top == 4){
        cout << "Stack Full" << endl;
    }
    else{
        cout << "Stack belum Full" << endl;
    }
}

void tampil() {
    for (int i = top; i >= 0; i--) {
        cout << stack[i] << " ";
    }
    cout << endl;
}

int main() {

    push(10);
    push(20);
    push(30);

    cout << "Isi Stack: ";
    tampil();

    lihatTop();
    cekEmpty();
    cekFull();

    pop();

    cout << "Setelah pop: ";
    tampil();
}