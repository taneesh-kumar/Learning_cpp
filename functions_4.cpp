#include <iostream>

int sumNum(int n){
    
    return (n*(n+1))/2;
}

int main(){
    int num;
    
    std::cout << "Till Number : ";
    std::cin >> num;

    std::cout << "The sum of " << num << " numbers : " << sumNum(num) << std::endl;
}