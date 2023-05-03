#include <iostream> // rename

int length(const char ch[]){
    int i = 0;
    while(ch[i] != '\0')
        i++;
    return i;
}

void append(char s[], char t[]){
    int slen = length(s), tlen = length(t);
    for(int i = 0; i < tlen; i++)
        s[slen + i] = t[i];
    s[slen + tlen] = '\0';
}

int main() {
    char s[100] = "hello", t[] = " world";
    append(s, t);
    std::cout << "Result: " << s << std::endl;
    return 0;
}
