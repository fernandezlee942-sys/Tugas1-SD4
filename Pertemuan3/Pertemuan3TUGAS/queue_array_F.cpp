// DISCUSS WITH ASLAB FOR THIS ONE



#include <iostream>
// using namespace std;

#define MAX 5
int queue[MAX];
int front = 0;
int rear = -1;


void enqueue(int data){
    if (rear==(MAX-1))
    {
        std::cout<<"Queue telah penuh"<<std::endl;
        return;
    }
    else{
        rear++;
        queue[rear]=data;
    }
}

void showQueue(){
    if (rear==-1)
    {
        std::cout<<"Queue masih kosong"<<std::endl;
    }
    else{
        for(int i=front; i<=rear;i++){
            std::cout<<queue[i]<<" ";
        }
        std::cout<<"\n";
    }    
}


void Front(){
    if(rear==-1){
        std::cout<<"Queue masih kosong"<<std::endl;
    }
    else{
        std::cout<<"Front : "<<front<<std::endl;
    }
}

void Rear(){
    if(rear==-1){
        std::cout<<"Queue masih kosong"<<std::endl;
    }
    else{
        std::cout<<"Rear : "<<rear<<std::endl;
    }
}

void Empty(){
    if(rear==-1){
        std::cout<<"Queue masih kosong"<<std::endl;
    }
    else{
        std::cout<<"Queue tidak kosong"<<std::endl;
    }
}

void Full(){
    if(rear == (MAX-1)){
        std::cout<<"Queue penuh"<<std::endl;
    }
    else{
        std::cout<<"Queue tidak penuh"<<std::endl;
    }
}



void Dequeue(){
    if(rear==-1){
        std::cout<<"Queue sudah kosong!"<<std::endl;
    }
    else{
        std::cout<<"Data yang di dequeue : "<<queue[front]<<std::endl;

        for(int i = front; i<rear;i++){
            queue[i]=queue[i+1];
        }
        rear--;
    }
}


int main(){

    enqueue(10);
    enqueue(20);
    enqueue(30);

    std::cout<<"Isi queue : ";
    showQueue();

    Front();
    Rear();
    Empty();
    Full();
    Dequeue();
    std::cout<<"Isi queue setelah dequeue : ";
    showQueue();
    Dequeue();
    std::cout<<"Isi queue setelah dequeue : ";
    showQueue();
    Dequeue();
    std::cout<<"Isi queue setelah dequeue : ";
    showQueue();
    Front();
    Rear();
}