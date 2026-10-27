#include <iostream>
// using namespace std;


//1 posisi keberapa
// 1 lgi angka plg kecil

// putaran pertama ke posisi pertama dan angka plg kecil
//kita swap posisinya jika nilai g sesuai

// putaran kedua fokus ke posisi kedua
// sekarang cari angka terkecil kedua swa dgn apa yg ad di posisi kedua klo g cocok

int main(){
    int data[]={5,2,4,1,3};
    int n=5;

    for(int i=0;i<n-1;i++){
        int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(data[j]<data[minIndex]){
                minIndex=j;
            }
        }
        std::swap(data[i], data[minIndex]);
    }

    std::cout<<"Hasil Selection Sort: ";
    for(int i=0;i<n;i++){
        std::cout<<data[i]<<" ";
    }
    
    return 0;
}
