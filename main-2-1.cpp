#include <iostream>

extern void print_binary_str(std::string decimal_number);

int main(){
    std::string decimal_number = "";
    std::cout << "Enter a decimal number:" << std::endl;
    std::cin >> decimal_number;
    print_binary_str(decimal_number);
    return 0;
}