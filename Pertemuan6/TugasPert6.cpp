#include <iostream>
#include <string>
// using namespace std;

int main(){
    std::string string;
    std::cout<<"Input sejumlah kata (string): "; std::getline(std::cin,string);
    //getline so the spacebar dont broke the whole cin

    int n=string.length();
    
    //sort based on the ascii code
    for(int i=1;i<n;i++){
        int key = string[i];
        int j = i-1;
        
        std::cout<<"Siklus "<<i<<": "<<"\n";

        while((j>=0) && (string[j] > key)){
            string[j+1] = string[j];
            j--;
            std::cout<<" (Geser) jadi: "<<string<<"\n";
        }

        string[j+1]=key;
        std::cout<<"Hasil Siklus "<<i<<": "<<string<<"\n";
    }

    std::cout<<"Hasil Insertion Sort: ";
    for(int i=0;i<n;i++){
        std::cout<<string[i];
        // tidak diletakkan " " biar bisa nampak perbedaan pas ada spasinya
    }
    
    return 0;
}
//this code is written at 18:06 (UTC+7)