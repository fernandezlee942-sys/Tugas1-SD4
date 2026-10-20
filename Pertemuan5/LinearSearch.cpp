#include <iostream>
// using namespace std;

int linearSearch(int data[], int n, int target){
    for (int i = 0; i < n;i++){
        if(data[i] == target){
            return i;
        }
    }
    return -1;
}
int main(){
    int data[] = { 70, 14, 49, 56, 23, 0, 5, 7, 44, 30};
    int n = 10;
    int target = 49;
    int hasil = linearSearch(data,n,target);
    if(hasil !=-1){
        std::cout<<"Data ditemukan pada indeks : "<<hasil<<std::endl;
    }   
    else{
        std::cout<<"Data tidak ditemukan"<<std::endl;
    }
}