#include <iostream>
// using namespace std;

int interpolationSearch(int data[], int n, int target){
    int low =0;
    int high = n-1;

    while((low<=high) && (target >= data[low]) && (target <= data[high])){
        if(data[low]==data[high]){

            // kalo data cmn 1
            if(data[low]==target){
                return low;
            }
            return -1;
        }

        int pos = low + (int)((double)(target-data[low])/(data[high]-data[low])*(high-low));
        // ubah nilai dri integer ke double i dont quite get the syntax but study later

        if(data[pos]==target){
            return pos;
        }
        else if(data[pos]<target){
            low = pos+1;
        }
        else{
            high = pos-1;
        }
    }
    return -1;
}

int main() {
    int data[] = {3,6,9,12,15,18,21};
    int n = 7;
    int target = 15;

    int hasil = interpolationSearch(data, n, target);

    if (hasil != -1) {
        std::cout << "Data ditemukan pada indeks : " << hasil << std::endl;
    } else {
        std::cout << "Data tidak ditemukan" << std::endl;
    }

    return 0;
}