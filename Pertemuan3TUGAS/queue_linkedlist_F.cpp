// FIN

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next; 
};
Node* front = nullptr;
Node* rear = nullptr;

int QSize = 0;

void Enqueue(int data){
    Node* newNode = new Node();
    
    newNode->data = data;
    newNode->next = nullptr;
    if(front==nullptr){
        front=newNode;
        rear=newNode;
    }
    else{
        rear->next=newNode;
        rear=newNode;
    }
    QSize++;
}

void ShowQueue(){
    Node* temp = front;
    std::cout<<"Isi queue : ";
    while(temp!=nullptr){
        std::cout<<temp->data<<" ";
        temp= temp->next;
    }
    std::cout<<"\n";

}

void Front(){
    if(front==nullptr){
        std::cout<<"Queue kosong!"<<std::endl;
        return;
    }
    std::cout<<"Front : "<< front->data<<std::endl;
}

void Rear(){
    if(front==nullptr){
        std::cout<<"Queue kosong!"<<std::endl;
        return;
    }
    std::cout<<"Rear : "<<rear->data<<std::endl;
}

void Size(){
    std::cout<<"Size : "<<QSize<<std::endl;
    
    // my old algorithm for some reason when im discussing with ma pals gpt he said tht its not a good idea to use o(n) just for size, its not even a o(n^2)

    // Node* temp = front;
    // int size = 0;

    // while(temp!=nullptr){
    //     size++;
    //     temp=temp->next;
    // }
    // std::cout<<"Size : "<<size<<std::endl;
}

void Empty(){
    if(front == nullptr){
        std::cout<<"Queue Kosong"<<std::endl;
    }
    else{
        std::cout<<"Queue tidak kosong"<<std::endl;
    }
}

void Dequeue(){
    if(front==nullptr){
        std::cout<<"Queue kosong!"<<std::endl;
        return;
    }

    Node* hapus = front;
    std::cout<<"Pop : "<<front->data<<std::endl;

    if(front->next==nullptr){
        front=nullptr;
        rear=nullptr;
    }
    else{
        front=front->next;
    }

    delete hapus;
    
    ShowQueue();
    std::cout<<"\n";
    QSize--;
}

int main(){

    Enqueue(10);
    Enqueue(20);
    Enqueue(30);

    ShowQueue();
    Front();
    Rear();
    Size();
    Empty();
    Dequeue();


        
}