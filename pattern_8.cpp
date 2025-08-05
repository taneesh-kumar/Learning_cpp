#include <iostream>

int main(){

    int n = 1;
    for (int i = 4; i >= 1; i--){
        for (int j = 1; j <= 5-i; j++){
            std::cout << "  " ;
        }
        for (int j = 1; j <= i; j++){
            std::cout << n << " ";
        }
        n++;
        std::cout << "" << std::endl;
    }
    
}