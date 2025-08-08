#include <iostream>
#include <string>

void print_binary_str(std::string decimal_number){
    int n = stoi(decimal_number), remainder = 0;
    std::string binary = "";
    while (n > 0){
        remainder = n % 2;
        binary = std::to_string(remainder) += binary;
        n /= 2;
    }

    std::cout << binary << std::endl;
}