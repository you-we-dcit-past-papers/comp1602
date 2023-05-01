#include <iostream>

int strlen(const char ch[]){
    int i = 0;
    while(ch[i] != '\0')
        i++;
    return i;
}

bool isNymWord(char s[]){
    int l = strlen(s);
    return l >= 3 && s[l - 1] == 'm' && s[l - 2] == 'y' && s[l - 3] == 'n';
}

int main() {
    char s1[] = "acronym";
    if(isNymWord(s1)) std::cout << "is Nym Word \n";
    else std::cout << "is not Nym Word \n";
    return 0;
}