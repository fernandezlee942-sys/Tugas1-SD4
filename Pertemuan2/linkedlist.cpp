#include <iostream>
#include <string>
#include <vector>
#include <array>
// using namespace std;

struct Node{
    int data;
    Node* next;
};

int main(){
    // membuat node pertama
    Node* node1 =  new Node();
    node1->data = 10;
    // nnti review kapan pakai -> kapan pakai .data
    node1->next = nullptr;

    // membuat node kedua
    Node* node2 = new Node();
    node2->data = 20;
    node2->next = nullptr;


    // tambahkan node baru di akhir
    Node* node3 = new Node();
    node3->data = 50;
    node3->next = nullptr;

    
    
    node1->next = node2;
    
    // tentukan head and tail
    Node* head = node1;
    Node* tail = node2;

    tail->next = node3;
    // ini sama aja dgn bilang node2->next = node3;
    // ini keknya karna tail itu node 2, nextnya node 2 jadi node 3

    tail = node3;
    // ini buat bilang kalo tail sekarang ambil node 3 bukan node 2 lagi;


    // tambah node bru diblkg
    Node* node4 = new Node();
    node4->data = 5;
    node4->next = head;
    head = node4;

    // tambah node di tengah
    Node* node5 = new Node();
    node5->data = 30;
    node5->next = node2->next; // node baru menjunjuk ke node next sblmnya
    node2->next = node5; // node 2 menunjuk ke node baru


    
    



    // tampilkan linked list
    Node* temp = head;
    
    
    while (temp != nullptr)
    {
        std::cout<<temp->data<<" ";
        temp = temp->next;
    }
    
    // menghapus node paling belakang
    temp = head;
    while(temp->next != tail){
        temp = temp->next;
    }
    // cari tails, delete temp
    delete tail;
    // temp masih di 30 saat tail kehapus
    tail = temp;
    // tail skrg jdi 30
    tail->next = nullptr;
    // stlh 30 null

    std::cout<<"\n";
    std::cout<<"Setelah hapus node paling belakang : ";
    temp = head;
    while(temp!=nullptr){
        std::cout<<temp->data<<" ";
        temp = temp->next;
    }
    std::cout<<"\n";


    // menghapus node paling depan
    temp = head;
    head = head->next;
    delete temp;
        std::cout<<"Setelah hapus node paling depan : ";
    temp = head;

    while(temp!=nullptr){
        std::cout<<temp->data<<" ";
        temp = temp->next;
    }
    
    // menghapus node 20
    temp = head;
    while(temp->next->data!=20){
        temp = temp->next;

    }
    std::cout<<"\nSetelah hapus node 20 : ";
    Node* hapus = temp->next; //node yang akan dihapus 
    temp->next = hapus->next;// node sebelum node yang akan dihapus menunjuk ke setelah node yang akan dihapus

    
    // temp->next = temp->next->next;
    // this also works
    // im not sure hwo this works, study again later
    // idk why but i can just spam the next as i like

    delete temp;
    
    while(temp!=nullptr){
        std::cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}


// linked list
// array 10, 20, 30, 40, 50
// index 0 - 10, 1-20, blabla
// di linked list g ad index
// adanya node
// di node ad data dan pointer
// data itu nilai2 di dalamnya

// lets say ad 3 node
// node 1 10
// node 2 20
// node 3 50
// habis node 1 node 3 hbs node 3 node 2 hbs ndoe 2 node 3 pke pointer
// linked list kumoulan node terhubung dengan pointer
// head yang paling depan(kiri)
// tail plg blkg (plg kanan)

// single linked list
// double linked list

// kalo single ada 2 orang, bisa aja si a dan si b, bs aja a suka b, b g suka a
// single 1 arah
 
// kalo double si a suka si b si b suka si b juga (2 arah)

// intinya single 1 arah double 2 arah

// single linked list kepecah 2 lagi
// double linked list jg kepecah 2
// yg pertama circular yg kedua noncircular 
// yg non circular akhirnya NULL

//  double inked list ad 3 kolom, 1 buat nilai awal 1 buat pointer sblmny 1 pointer buat berikutnya

// operasi linked list add node
// bs trk di dpn tengah blkg, tgh itu g paspasan di tgh apapun yg bkn dpn blkg itu tengah