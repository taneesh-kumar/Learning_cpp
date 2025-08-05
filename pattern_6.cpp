#include <iostream>

int main(){
    for (int i = 1; i <= 4; i++){
        for (int j = i; j >= 1; j--){
            std::cout <<  j << " " ;
        }
        std::cout << std::endl;
    }
}