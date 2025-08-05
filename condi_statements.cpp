#include<iostream>

int main(){
    int number;
    std::cout << "Enter a number : ";
    std::cin >> number;

    if (number >= 18){
        std::cout << "You can VOTE!" << std::endl;
    } else{
        std::cout << "You can't VOTE :-/" << std::endl;
    }

    std::cout << (number >= 18 ? "You can VOTE" : "You can't VOTE") << std::endl;
    
    return 0;
}