#include <iostream>

int maxNum(int a, int b){
    if (a > b) {
        return a;   
    } else {
        return b;
    }
}
int main(){
    int num1, num2;
    std::cout << "Number 1 : ";
    std::cin >> num1;
    
    std::cout << "Number 2 : ";
    std::cin >> num2;

    std::cout << "The Maximum of " << num1 << " and " << num2 << " is " << maxNum(num1, num2) << std::endl;
}