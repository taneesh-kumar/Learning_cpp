#include <iostream>

void calAge(int a){
    if (a < 18)
    {
        std::cout << "You can't get Driving License" << std::endl;
    } else if (a > 18) {
        std::cout << "You Can get a Driving License" << std::endl;
    }
    
}
int main(){
    int age;

    std::cout << "Age : ";
    std::cin >> age;

    if (age < 0)    
    {
        std::cout << "Invalid Age !" << std::endl;
    } else
    {
        calAge(age);
    }
    
    
    return 0;
}