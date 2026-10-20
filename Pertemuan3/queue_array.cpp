#include <iostream>
// using namespace std;

#define MAX 5

int main(){
    // stack lifo
    int queue[MAX];
    int front = 0;
    int rear = -1;


    // enqueue
    rear++;
    queue[rear]=10;

    rear++;
    queue[rear]=20;
    
    rear++;
    queue[rear]=30;

    std::cout<<"Isi Queue : ";
    for(int i=front;i<=rear;i++){
        std::cout<<queue[i]<<" ";
    }

    // stack harus dri plg atas ke plg bawah
    std::cout<<"\n";

    // front and rear
    std::cout<<"Front : "<< front <<std::endl;
    std::cout<<"Rear : "<< rear <<std::endl;


    // empty
    if(front>rear){
        std::cout<<"Queue kosong"<<std::endl;
    }
    // maybe if rear ==-1 too
    else{
        std::cout<<"Queue tidak kosong"<<std::endl;
    }


    // full
    if((front == 0)&&(rear == (MAX-1))){
        std::cout<<"Queue penuh"<<std::endl;
    }
    else{
        std::cout<<"Queue tidak penuh"<<std::endl;
    }

    // dequeue
    std::cout<<"Dequeue : "<<queue[front]<<std::endl;
    front++;

    std::cout<<"Isi queue setelah di dequeue : ";
    for(int i=front;i<=rear;i++){
        std::cout<<queue[i]<<" ";

    }
    std::cout<<"\n";


}


// front di bawah
// rear di atas
