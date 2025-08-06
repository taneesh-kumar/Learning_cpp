#include <iostream>

void numDiffer(int a, int b){
    std::cout << a << " is " << (a%2 == 0 ? "EVEN" : "ODD") << std::endl;
    std::cout << b << " is " << (b%2 == 0 ? "EVEN" : "ODD") << std::endl;
}
int main(){
    int num1, num2;
    std::cout << "Number 1 : ";
    std::cin >> num1;
    
    std::cout << "Number 2 : ";
    std::cin >> num2;

    numDiffer(num1, num2);
}