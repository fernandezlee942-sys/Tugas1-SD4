#include <iostream>
// using namespace std;

int main(){
    int data[] = {5,2,4,1,3};
    int n=5;
    for(int i=0;i<n-1;i++){
        for(int j=0; j<n-1-i;j++){
            if(data[j]>data[j+1]){
                std::swap(data[j],data[j+1]);
            }
        }
    }

    std::cout<<"Hasil Bubble Sort: ";
    for(int i=0;i<n;i++){
        std::cout<<data[i]<<" ";
    }
    return 0;

}
// bubble pilih 2
// insertion jg pilih 2 dibandingkan dgn yg di kirinya
