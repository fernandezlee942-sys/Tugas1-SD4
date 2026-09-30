// DISCUSS WITH ASLAB FOR THIS ONE






#include <iostream>
// using namespace std;

#define MAX 5
int queue[MAX];
int front = -1;
int rear = -1;
int counter = 0;

void enqueue(int data){
    if(counter==MAX){
        std::cout<<"Queue sudah penuh"<<std::endl;
        return;
    }

    if(counter==0){
        front=0;
        rear=0;
    }
    else{
        rear=(rear+1)%MAX;
    }
    queue[rear]=data;
    counter+=1;
}

void showQueue(){
    if (counter==0)
    {
        std::cout<<"Queue kosong"<<std::endl;
        return;
    }
    int idx=front;
    std::cout<<"Isi queue : ";
    for(int i=0; i<counter; i++){
        std::cout<<queue[idx]<<" ";
        idx=(idx+1)%MAX;
    }
    std::cout<<"\n";    
}



void Front(){
    if (counter==0)
    {
        std::cout<<"Queue masih kosong"<<std::endl;
        return;
    }
    
    std::cout<<"Front : "<<queue[front]<<std::endl;
}

void Rear(){
    if (counter==0)
    {
        std::cout<<"Queue masih kosong"<<std::endl;
        return;    
    }

    std::cout<<"Rear : "<<queue[rear]<<std::endl;
}

void Empty(){
    if(counter==0){
        std::cout<<"Queue masih kosong"<<std::endl;
    }
    else{
        std::cout<<"Queue tidak kosong"<<std::endl;
    }
}

void Full(){
    if(counter==MAX){
        std::cout<<"Queue penuh"<<std::endl;
    }
    else{
        std::cout<<"Queue tidak penuh"<<std::endl;
    }
}


void Dequeue(){
    if(counter==0){
        std::cout<<"Queue sudah kosong!"<<std::endl;
        return;
    }

    else{
        std::cout<<"Data yang di dequeue : "<<queue[front]<<std::endl;        
        front=(front+1)%MAX;
    }
    
    counter-=1;
    if(counter==0){
        rear=-1;
        front=-1;
    }
    showQueue();

}


int main(){

    enqueue(10);
    enqueue(20);
    enqueue(30);

    showQueue();

    Front();
    Rear();
    Empty();
    Full();
    Dequeue();
}
