#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand((unsigned int)time(nullptr));
    int freq[5] = {0};
    for(int i = 0; i < 25; i++) {
        int random = rand() % 100;
        if(random <= 50)
            freq[0]++;
        else if(random <= 70)
            freq[1]++;
        else if(random <= 90)
            freq[2]++;
        else if(random <= 95)
            freq[3]++;
        else  
            freq[4]++;
    }

    for(int f : freq) std::cout << f << std::endl;

    return 0;
}
