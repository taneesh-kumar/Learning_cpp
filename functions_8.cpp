#include <iostream>

int calFactorial(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main(){

    int num;

    std::cout << "Number : ";
    std::cin >> num;

    if (num < 0) {
        std::cout << "Invalid entry !!!" << std::endl;
    } else if (num == 0 || num == 1){
        std::cout << num << "! is " << 1 << std::endl;
    } else {
        std::cout << num << "! is " << calFactorial(num) << std::endl;
    }
    
    return 0;
}