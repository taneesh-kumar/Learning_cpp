#include <iostream>

int main(){
    int num = 3;
    float sal = 50000;
    char code = 'B';
    bool is = true;
    std::cout << "The agent is " << code << ".\nHis number is " << num << ".\nHe gets paid " << sal << ".\nHe is competent : " << std::boolalpha << is << std::endl;
}