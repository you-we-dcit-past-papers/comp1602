#include <iostream>

int strlen(const char ch[]){
    int i = 0;
    while(ch[i] != '\0')
        i++;
    return i;
}

bool isLetter(char ch){
    return ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z';
}

char toUpper(char ch){
    return (ch >= 'a' && ch <= 'z') ? ch-32: ch;
}

void toNetLingua(char s[], char n[]){
    int j = 0, l = strlen(s);
    for(int i = 0; i < l; i++)
        if ((i==0 || s[i-1]== ' ') && isLetter(s[i]))
            n[j++] = toUpper(s[i]);
    n[j] = '\0';
}

int main() {
    char s[] = "shaking my head";
    char n[100];
    toNetLingua(s, n);
    std::cout << n << std::endl;
    return 0;
}
