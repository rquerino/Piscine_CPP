// 1 - stdio streams

#include <iostream>

int main(void) {
    char    buff[512];

    // std:endl handles the end of a line, with a \n
    std::cout << "Hello world !" << std::endl;

    // cout = output, cin = input
    std::cout << "Input a word: ";
    std::cin >> buff;
    std::cout << "You entered: [" << buff << "]" << std::endl;

    return 0;
}