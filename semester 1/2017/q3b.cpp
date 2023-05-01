#include <iostream>
#include <cstdlib>
#include <ctime>
int main(){
    srand((unsigned int)time(nullptr));
    int freq[2] = {0};
    for(int i = 0; i < 5000; i++){
        int random = rand() % 100;
        if(random == 1)
            freq[0]++;
    }

    std::cout << "There are " << freq[0] << " defective bulbs\n";
    return 0;
}