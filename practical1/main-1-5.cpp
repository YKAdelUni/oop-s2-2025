#include <iostream>

extern int count_evens(int number);

int main() {
    int number = 234;
    std::cout << "The number of even numbers in " << 234 << " is " << count_evens(number) << std::endl;
    return 0;
}