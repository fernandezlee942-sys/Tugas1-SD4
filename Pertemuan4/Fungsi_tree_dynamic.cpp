#include <iostream>
// using namespace std;

struct Node{
    int data;
    Node* kiri;
    Node* kanan;
};

void tambah(Node* root, int data){
    if(root==nullptr){
        Node* root = new Node();
        root->data=data;
        root->kiri=nullptr;
        root->kanan=nullptr;
        return;
        
    }
    
    // input lbh bsr dri root
    if(data > root->data){
        tambah(root->kiri, data);
    }
    // input lbh kecil dri root
    if(data<root->data){
        tambah(root->kanan,data);
    }

    return;
}

int main(){
    Node* root = nullptr;
    int angka;

    std::cout<<"Masukkan angka (0=stop) : ";
    std::cin>>angka;

    while(angka!=0){
        tambah(root,angka);
        std::cin>>angka;
    }
    return 0;
}

// yg dibalikkan bukan berupa void ubah biar ini jadi void