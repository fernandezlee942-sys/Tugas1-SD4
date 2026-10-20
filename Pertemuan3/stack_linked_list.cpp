#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next; 
};

int main(){
    Node* top = nullptr;

    // push
    Node* node1 = new Node();
    node1->data = 10;
    node1->next = top;
    top = node1;
    
    Node* node2 = new Node();
    node2->data = 20;
    node2->next = top;
    top = node2;
    
    Node* node3 = new Node();
    node3->data = 30;
    node3->next = top;
    top = node3;
    
    // tampilkan struct
    Node* temp = top;
    std::cout<<"Isi linked list : ";

    while(temp!=nullptr){
        std::cout<<temp->data<<" ";
        temp= temp->next;
    }

    std::cout<<"\n";

    // top
    std::cout<<"Top : "<< top->data<<std::endl;

    // size
    int size = 0;
    temp = top;

    while(temp!=nullptr){
        size++;
        temp=temp->next;
    }
    std::cout<<"Size : "<<size<<std::endl;


    // empty
    if(top==nullptr){
        std::cout<<"Linked list Kosong"<<std::endl;

    }
    else{
        std::cout<<"Linked list tidak kosong"<<std::endl;
    }

    // pop
    Node* hapus = top;
    std::cout<<"Pop : "<<top->data<<std::endl;
    top = top->next;
    delete hapus;

    // tampilkan setelah pop
    temp = top;
    std::cout<<"Isi Linked list setelah di pop : ";
    while (temp!=nullptr)
    {
        std::cout<<temp->data<<" ";
        temp=temp->next;
    }
    std::cout<<"\n";
        
}