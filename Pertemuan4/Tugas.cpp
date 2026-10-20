#include <iostream>
// using namespace std;

struct Node {
    int data;
    Node* kiri;
    Node* kanan;
};

//PRE-ORDER
void preOrder(Node* root) {
    if (root != nullptr) {
        std::cout << root->data << " ";
        preOrder(root->kiri);
        preOrder(root->kanan);
    }
}

//IN-ORDER
void inOrder(Node* root) {
    if (root != nullptr) {
        inOrder(root->kiri);
        std::cout << root->data << " ";
        inOrder(root->kanan);
    }
}

//POST-ORDER
void postOrder(Node* root) {
    if (root != nullptr) {
        postOrder(root->kiri);
        postOrder(root->kanan);
        std::cout << root->data << " ";
    }
}

// bakal jalan dari root ampe ketemu null baru buat node baru
void tambah(Node*& root, int data){
    if(root==nullptr){
        root = new Node();
        root->data=data;
        root->kiri=nullptr;
        root->kanan=nullptr;
        return;        
    }
    
    // input lbh bsr dri root
    if(data > root->data){
        tambah(root->kanan, data);
    }
    // input lbh kecil dri root
    else if(data<root->data){
        tambah(root->kiri, data);
    }

    else{
        std::cout<<"Angka sudah ada didalam tree!\n";
    }

    return;
}

int main() {

    Node* root = nullptr;
    int angka;

    std::cout<<"Masukkan angka (0=stop) : ";
    std::cin>>angka;

    while(angka!=0){
        tambah(root,angka);
        std::cin>>angka;
    }
    std::cout << "Pre Order : ";
    preOrder(root);
    std::cout << '\n';
    
    std::cout << "In Order : ";
    inOrder(root);
    std::cout << '\n';
    
    std::cout << "Post Order : ";
    postOrder(root);
    std::cout << '\n';

    return 0;
}