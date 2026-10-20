#include <iostream>
// using namespace std;

#define MAX 5

int main(){
    // stack lifo
    int stack[MAX];
    int top = -1;
    
    // Push
    top++;
    stack[top]=10;

    top++;
    stack[top]=20;
    
    top++;
    stack[top]=30;

    std::cout<<"Isi Stack : ";
    for(int i=top;i>=0;i--){
        std::cout<<stack[i]<<" ";
    }
    // stack harus dri plg atas ke plg bawah
    std::cout<<"\n";

    // top
    std::cout<<"Top : "<< stack[top]<<std::endl;

    // size
    std::cout<<"Size : "<<top+1<<std::endl;
    // array mulai dri 0 kalo mau size +1


    // empty
    if(top==-1){
        std::cout<<"Stack Kosong"<<std::endl;
    }
    else{
        std::cout<<"Stack Tidak Kosong"<<std::endl;
    }

    // pop
    std::cout<<"Pop : "<<stack[top]<<std::endl;
    top--;

    std::cout<<"Isi stack setelah pop : ";
    for(int i=top; i>=0;i--){
        std::cout<<stack[i]<<" ";
    }
    std::cout<<"\n";

    // just in cse kt buat projek panjang bgt kt define aja biar enak edit maxnya
}