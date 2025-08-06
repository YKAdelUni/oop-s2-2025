#include <iostream>
#include <string>

int main(){
    int n, remainder = 0;
    std::cout << "Enter a decimal number:" << std::endl;
    std::cin >> n;
    std::string binary = "";

    while (n > 0){
        remainder = n % 2;
        binary = std::to_string(remainder) += binary;
        n /= 2;
    }

    std::cout << "binary value = " << binary << std::endl;
}