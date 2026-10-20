#include <iostream>
// using namespace std;

int main(){
    int jumlahX;
    int nilai[1024];

    std::cout<<"Input jumlah data : ";
    std::cin>>jumlahX;

    for (int i=0;i<jumlahX;i++){
        std::cout<<"Input Nilai Nilai["<<i<<"]: ";
        std::cin>>nilai[i];
    }

    for(int i=0;i<jumlahX;i++){
        std::cout<<"Nilai["<<i<<"]: "<<nilai[i]<<std::endl;
    }
    
    // std::cout<<"\n";
    // std::cout<<sizeof(nilai)/sizeof(nilai[i])<<std::endl;
    return 0;
}
// stack --> first in last out
// heap  --> array dinamis pakai ini, manfaatin pointer

// * alamat, ^ isi

