#include <iostream>
char toUpper(char ch){
   return (ch >= 'a' && ch <= 'z') ? ch-32: ch;
}

int main() {
    char ch1 = 'a';
    std::cout << "Uppercase of " << ch1 << ": " << toUpper(ch1) << std::endl;
    return 0;
}