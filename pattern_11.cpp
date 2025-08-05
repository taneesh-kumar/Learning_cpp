//Butterfly
#include <iostream>

int main(){
    for (int i = 1; i <= 4; i++){
        for (int j = 1; j <= i; j++){
            std::cout << "* ";
        }
        for (int j = (4-i)*2; j >= 1; j--){
            std::cout << "  ";
        }
        for (int j = 1; j <= i; j++){
            std::cout << "* ";
        }
        std::cout << "" << std::endl;
    }
    for (int i = 4; i >= 1; i--){
        for (int j = 1; j <= i; j++){
            std::cout << "* ";
        }
        for (int j = (4-i)*2; j >= 1; j--){
            std::cout << "  ";
        }
        for (int j = 1; j <= i; j++){
            std::cout << "* ";
        }
        std::cout << "" << std::endl;
    }
    
}