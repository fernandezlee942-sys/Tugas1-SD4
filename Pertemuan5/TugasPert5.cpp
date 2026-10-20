#include <iostream>
// using namespace std;

void BubbleSort(int Array[], int size){
    if(size==0){
        std::cout<<"Array kosong!"<<std::endl;
    }
    if(size==1){
        return;
    }
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (Array[j] > Array[j + 1]) {
                int temp = Array[j + 1];
                Array[j + 1] = Array[j];
                Array[j] = temp;
            }
        }
    }

}


int binarySearch(int data[], int n, int target){
    int low = 0;
    int high = n-1;

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(data[mid] == target){
            return mid;
        }
        else if(target < data[mid]){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return -1;
}


int main(){
    int n = 0;
    
    std::cout<<"Input ukuran array: "; std::cin>>n;
    int* Array = new int[n];

    for(int i=0;i<n;i++){
        std::cout<<"Input Array["<<i<<"]: "; std::cin>>Array[i];
    }
    BubbleSort(Array,n);

    int target;
    std::cout<<"Input nilai yang ingin dicari: "; std::cin>>target;
    int hasil = binarySearch(Array,n,target);
    if(hasil !=-1){
        std::cout<<"Data ditemukan pada indeks : "<<hasil<<std::endl;
    }   
    else{
        std::cout<<"Data tidak ditemukan"<<std::endl;
    }
 
    delete[] Array;
    return 0;
}