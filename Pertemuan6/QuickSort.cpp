#include <iostream>
#include <algorithm>

// using namespace std;
int partition(int data[],int low, int high){
    int pivot = data[high];
    int i = low-1;

    for(int j = low; j<high;j++){
        if(data[j]<pivot){
            i++;
            std::swap(data[i],data[j]);
        }
    }
    std::swap(data[i+1],data[high]);
    return i+1;
}

void quickSort(int data[], int low, int high){
    if(low<high){
        int p = partition (data, low, high);
        quickSort(data, low, p-1);
        quickSort(data, p+1, high);
    }
}

int main(){
    int data[]={5,2,4,1,3};
    int n=5;
    quickSort(data,0,n-1);

    std::cout<<"Hasil Quick Sort: ";
    for(int i=0;i<n;i++){
        std::cout<<data[i]<<" ";
    }
    
    return 0;
}

//pake pivot


// bubble bandignkan dgn di depan
// insertion yg pindah ke kiri
// merge pecah
// quick pivot
// selection plg kecil di indeks ke 0, plg kecil berikutnya di index stlh itu