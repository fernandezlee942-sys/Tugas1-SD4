#include <iostream>
// using namespace std;

struct Node{
    int data;
    Node* kiri;
    Node* kanan;
};

int main(){
    // Membuat root
    Node* root =  new Node();
    root->data=15;
    root->kiri=nullptr;
    root->kanan=nullptr;

    // membuat anak kiri
    root->kiri = new Node();
    root->kiri->data= 27;
    root->kiri->kiri=nullptr;
    root->kiri->kanan=nullptr;
    // for whtever reason aslab use null instead of null ptr
    
    // membuat anak kanan
    root->kanan = new Node();
    root->kanan->data= 30;
    root->kanan->kiri=nullptr;
    root->kanan->kanan=nullptr;
    
    // membuat anak kiri dari 27
    root->kiri->kiri = new Node();
    root->kiri->kiri->data= 25;
    root->kiri->kiri->kiri=nullptr;
    root->kiri->kiri->kanan=nullptr;
    
    // membuat anak kanan dari 27
    root->kiri->kanan = new Node();
    root->kiri->kanan->data= 29;
    root->kiri->kanan->kiri=nullptr;
    root->kiri->kanan->kanan=nullptr;

    // menampilkan output
    std::cout<<"Root : "<<root->data<<std::endl;
    std::cout<<"Kiri Root : "<<root->kiri->data<<std::endl;
    std::cout<<"Kanan Root : "<<root->kanan->data<<std::endl;
    std::cout<<"Anak Kiri dari 27 : "<<root->kiri->kiri->data<<std::endl;
    std::cout<<"Anak Kanan dari 27 : "<<root->kiri->kanan->data<<std::endl;
    return 0;





}
// heard tht search worked using this maybe try to make ur own search engine later