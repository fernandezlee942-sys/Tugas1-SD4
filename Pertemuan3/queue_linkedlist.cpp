#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next; 
};

int main(){
    Node* front = nullptr;
    Node* rear = nullptr;

    // enqueue
    Node* node1 = new Node();
    node1->data = 10;
    node1->next = nullptr;
    front=node1;    

    Node* node2 = new Node();
    node2->data = 20;
    node2->next = nullptr;


    Node* node3 = new Node();
    node3->data = 30;
    node3->next = nullptr;

    node1->next=node2;
    node2->next=node3;

    
    // tampilkan struct
    Node* temp = front;
    std::cout<<"Isi queue : ";

    while(temp!=nullptr){
        std::cout<<temp->data<<" ";
        temp= temp->next;
    }

    std::cout<<"\n";

    // front
    std::cout<<"Front : "<< front->data<<std::endl;
    // rear
    temp=front;
    while (temp!=nullptr)
    {
        rear=temp;
        temp=temp->next;
    }

    std::cout<<"Rear : "<< rear->data<<std::endl;
    // size
    int size = 0;
    temp = front;

    while(temp!=nullptr){
        size++;
        temp=temp->next;
    }
    std::cout<<"Size : "<<size<<std::endl;


    // empty
    if(front==nullptr){
        std::cout<<"Queue Kosong"<<std::endl;
    }
    else{
        std::cout<<"Queue tidak kosong"<<std::endl;
    }

    // Dequeue
    Node* hapus = front;
    std::cout<<"Pop : "<<front->data<<std::endl;
    front = front->next;
    delete hapus;

    // tampilkan setelah pop
    temp = front;
    std::cout<<"Isi queue setelah di pop : ";
    while (temp!=nullptr)
    {
        std::cout<<temp->data<<" ";
        temp=temp->next;
    }
    std::cout<<"\n";
        
}