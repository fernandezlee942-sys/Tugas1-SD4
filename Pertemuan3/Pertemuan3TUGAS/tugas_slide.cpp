#include <iostream>
// using namespace std;
#define MAX 100
int main(){
    char stack[MAX];
    int top = -1;
    char nama[1024]= "Fernandez";
    // std::cout<<"Input nama : "; std::cin>>nama;
    int buffer = 0;

    while (nama[buffer]!='\0')
    {
        buffer+=1;
    }

    for(int i = 0; i<buffer; i++){
        top++;
        stack[top]=nama[i];
    }
    
    std::cout<<"Isi stack : ";
    for(int i = top; i>=0;i--){
        std::cout<<stack[i]<<" ";
    }

}
// apparently tugas dimodul mirip2 uts