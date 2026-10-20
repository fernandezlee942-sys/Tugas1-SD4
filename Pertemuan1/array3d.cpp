#include <iostream>

int main(){
    int nilai[2][3][4]{
        {{0, 0, 0, 0},
        {1, 1, 1, 1},
        {0, 1, 0 ,1}},
        {{2, 2, 2, 2},
        {4, 4, 4, 4},
        {6 ,6 ,8 ,6}}
    };
    // std::cout<<nilai[1][2][2];

    // for (int i=0;i<2;i++){
    //     for(int j=0;j<3;j++){
    //         for(int k=0;k<4;k++){
    //             std::cout<<"Input nilai["<<i<<"]["<<j<<"]["<<k<<"]: ";
    //             std::cin>>nilai[i][j][k];
    //         }
    //         std::cout<<"\n";
    //     }
    //     std::cout<<"\n";
    // }


    // 2 lapis 3 baris 4 kolom
    
    for (int i=0;i<2;i++){
        
        for(int j=0;j<3;j++){
            for(int k=0;k<4;k++){
                std::cout<<nilai[i][j][k]<<" ";

            }
            std::cout<<"\n";
        }
        std::cout<<"\n";
    }
}

// buat di cpp link github kmpl di classroom