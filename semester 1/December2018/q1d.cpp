#include <iostream>
#include <cstdlib>
#include <ctime>
int main(){
    srand(time(NULL));
    int freq[6] = {0};
    for(int i = 0; i < 1000; i++){
        int random = 1 + rand() % 8;
        freq[random <= 1 ? 0 : random <= 3 ? 1 : random <= 4 ? 2 
        : random <= 6 ? 3 : random <= 7 ? 4 : 5]++;
    }

    for(int i : freq) 
    std::cout << i << " times\n";

    return 0;
}