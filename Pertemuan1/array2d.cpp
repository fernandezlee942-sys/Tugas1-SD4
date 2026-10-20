#include <iostream>

int main(){
    int nilai [3][5] = {
        {100, 90, 60, 70, 30},
        {0, 70, 50, 80, 40 },
        {100, 100, 100, 100, 100}
    };
    // depan baris blkg kolom
    // 3*5 matriks, 3 bawah kesamping 5
    // ada 3 baris ada 5 kolom


    for (int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            std::cout<<"Input nilai["<<i<<"]["<<j<<"]: ";
            std::cin>>nilai[i][j];
        }
        std::cout<<"\n";
    }

    for (int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            std::cout<<nilai[i][j];
            if(j<4){
                std::cout<<", ";
            }
        }
        std::cout<<"\n";
    }

    return 0;
}

// try to later make a 2d dynamic array