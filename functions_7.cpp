#include <iostream>

float simpleInterest(float p, float t, float r){
    return ((p*t*r)/100);
}

int main(){

    float p, t, r;

    std::cout << "principal : ";
    std::cin >> p;
    
    std::cout << "Time Period : ";
    std::cin >> t;
    
    std::cout << "Rate of Interest : ";
    std::cin >> r;

    std::cout << "" << std::endl;
    std::cout << "Simple Interest : " << simpleInterest(p,t,r) << std::endl;
}