#include <iostream>

using namespace std;

int gcd(int a, int b){
    while(a != b){
        if(a > b){
            a = a - b;
        }
        else{
            b = b - a;
        }
    }

    std::cout << "The GCD is: " << a;
    return a;
}


int main() {
    int a;
    int b;
    int d;

//  block to collect numbers for GCD calculation
    std::cout << "Please enter value A: ";
    std::cin >> a;
    std::cout << "Please enter value B: ";
    std::cin >> b;

//  confirm input
    std::cout << "You have selected " << a << " and " << b << ". calculating GCD...\n\n";

    gcd(a, b);
    return 0;
}
