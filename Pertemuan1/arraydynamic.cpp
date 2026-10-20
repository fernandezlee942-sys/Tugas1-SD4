#include <iostream>

int main(){
    int n;
    std::cout<<"Masukkan panjang array : ";std::cin>>n;
    int* data = new int[n];
    // learn more about this new thingies
    // somehow you often see this new thing especially in app framework tht make windows appear such as qt

    // for (int i=0; i<n; i++){
    //     std::cout<<"Input data["<<i<<"]: ";
    //     std::cin>>data[i];
    // }

    data[0]=12;
    std::cout<<data<<std::endl;
    std::cout<<*data<<std::endl;
    std::cout<<&data<<std::endl;

    for (int i=0; i<n; i++){
        data[i]=i*5;
        std::cout<<data[i];
        if(i<n-1){
            std::cout<<", ";
        }
    }
    
    delete[] data;

    // has smtg to do with memory management

    return 0;
}
// di array dinamis kt kan g tau ad berapa data yang masuk jadinya hrs makan memori internal, yg sblmnya klo g slh cmn makan ram bntr aja --> google more for more details


