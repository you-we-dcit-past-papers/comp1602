#include <iostream>

int strlen(const char ch[]){
    int i = 0;
    while(ch[i] != '\0')
        i++;
    return i;
}

void reverse(char s[]){
    int l = strlen(s);
    for(int i = 0; i < l/2; i++){
        char temp = s[i];
        s[i] = s[l-i-1];
        s[l-i-1] = temp;
    }
}

void intToString(int n, char s[]){
    int i  = 0;
    while(n != 0){
        s[i++] = n % 10 + '0';
        n /= 10;
    }
    s[i] = '\0';
    reverse(s);
}

int main() {
    char s[10];
    int n = 3005; 

    intToString(n, s);
    std::cout << s << std::endl;

    return 0;
}