#include <iostream>

int calSq(int a){
    return a*a;
}
int main(){
    int num;
    std::cout << "Number : ";
    std::cin >> num;

    std::cout << "The square of " << num << " is " << calSq(num) << std::endl;
}