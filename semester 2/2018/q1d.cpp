#include <iostream>
using namespace std;

int strlen(const char ch[]){
    int i = 0;
    while(ch[i] != '\0')
        i++;
    return i;
}

int myMax(int a, int b) {
    return (a > b) ? a : b;
}

int longestSequence(char ch[]) {
    int cMax = 0, j = 1;
    
    for (int i = 1; ch[i] != '\0'; i++) {
        if (ch[i] == ch[i-1])
            j++;
        else {
            cMax = myMax(cMax, j);
            j = 1;
        }
    }
    return myMax(cMax, j);
}

int main() {
    char ch[] = "aabbcddddddeeebbbaaaacccd";
    cout << longestSequence(ch) << endl; // Output: 6
    return 0;
}
    