// FIN

#include <iostream>
// using namespace std;

struct Node{
    int data;
    Node* next; 
};
Node* top = nullptr;
// Node* temp = nullptr;
// apparently its not a good idea to make temp into a global variable since we often play with its values especially on the showstack
void Push(int data){
    Node* newNode= new Node();
    newNode->data = data;
    newNode->next = top;
    top = newNode;
}

void ShowStack(){
    if(top==nullptr){
        std::cout<<"Stack kosong"<<std::endl;
        return;
    }
    Node* temp = top;
    std::cout<<"Isi Stack : ";
    while (temp!=nullptr)
    {
        std::cout<<temp->data<<" ";
        temp=temp->next;
    }
    std::cout<<"\n";    
}

void Size(){
    int size = 0;
    Node* temp = top;

    while(temp!=nullptr){
        size++;
        temp=temp->next;
    }
    std::cout<<"Size : "<<size<<std::endl;
}
void Empty(){
    if(top==nullptr){
        std::cout<<"Stack Kosong"<<std::endl;
    }
    else{
        std::cout<<"Stack tidak kosong"<<std::endl;
    }
}


void Top(){
    if (top==nullptr)
    {
        Empty();
        return;
    }
    
    std::cout<<"Top : "<< top->data<<std::endl;
}
// i put top down here since it calls empty and compiler wont know abt empty if i put it above empty

void Pop(){

    if(top==nullptr){
        Empty();
        return;
    }

    Node* hapus = top;
    std::cout<<"Pop : "<<top->data<<std::endl;
    top = top->next;
    delete hapus;

    ShowStack();

}

int main(){
    Push(10);
    Push(20);
    Push(30);
    Push(60);
    ShowStack();
    Top();
    Size();
    Empty();
    Pop();
        
}