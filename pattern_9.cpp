#include <iostream>

int main(){
    for (int i = 1; i <= 4; i++){
        for (int j = 1; j <= 4-i; j++){
            std::cout << "  " ;
        }
        for (int j = 1; j <= i; j++){
            std::cout << j << " ";
        }
        for (int j = i; j > 1; j--){
            std::cout << (j-1) << " ";
        }
        std::cout << "" << std::endl;
    }
}