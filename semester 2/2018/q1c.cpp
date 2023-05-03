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

char toLower(const char ch){
    return (ch >= 'A' && ch <= 'Z')? ch+32 : ch;
}

bool isPanagram(char s[]){
    for(char i = 97; i <= 122; i++){
        if(isLetter(s[i])){
            bool found = false;
            for(int j = 0; j < strlen(s); j++){
                if(toLower(s[j]) == i)
                    found = true;
            }
            if(!found) return false;
        }
    }
    return true;
}

bool isPanagram(char s[]) {
    bool found[26] = {false};
    for(int i = 0; i < strlen(s); i++) 
        if(isLetter(s[i])) 
            found[toLower(s[i]) - 'a'] = true;
    for (int i = 0; i < 26; i++)
        if (!found[i]) return false;
    return true;
}

int main() {
    char ch[] = "The Quick Brown Fox Jumps Over The Lazy Dog";
    std::cout << ch;
    if(isPanagram(ch))
        std::cout << " is a panagram \n";
    else
        std::cout << " is not a panagram \n";
    return 0;
}