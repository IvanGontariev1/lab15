#include <iostream>

int main() {

    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;


    const int maxDigits = 10;
    int digits[maxDigits];
    int numDigits = 0;


    bool isNegative = (n < 0);
    if (isNegative) {
        n = -n;
    }


    do {
        digits[numDigits] = n % 10;
        n /= 10;
        ++numDigits;
    } while (n > 0);


    std::cout << "Digits in the array: ";
    if (isNegative) {
        std::cout << "-";
    }
    for (int i = numDigits - 1; i >= 0; --i) {
        std::cout << digits[i] << " ";
    }
    std::cout << std::endl;


    for (int i = 0; i < numDigits - 1; ++i) {
        for (int j = 0; j < numDigits - i - 1; ++j) {
            if (digits[j] > digits[j + 1]) {
                int temp = digits[j];
                digits[j] = digits[j + 1];
                digits[j + 1] = temp;
            }
        }
    }


    std::cout << "Sorted digits in the array: ";
    if (isNegative) {
        std::cout << "-";
    }
    for (int i = 0; i < numDigits; ++i) {
        std::cout << digits[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
