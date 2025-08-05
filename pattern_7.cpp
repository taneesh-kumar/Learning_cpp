#include <iostream>

int main(){
    int n = 1;
    for (int i = 1; i <= 4; i++){
        for (int j = i; j >= 1; j--){
            std::cout <<  n << " " ;
            n++;
        }
        std::cout << std::endl;
    }
}