#include <iostream>

int strlen(const char ch[]){
    int i = 0;
    while(ch[i] != '\0')
        i++;
    return i;
}

bool isInt(const char ch){  
    return ch >= '0' && ch <= '9'; 
}

int getInt(char s[]){  
    int sum = 0;
    for(int i = 0; i < strlen(s); i++)
        if(isInt(s[i]))
            sum = sum * 10 + (s[i] - '0'); 
    return sum;
}

int main() {
    char s[] = "weight = 115kg";
    int num = getInt(s);
    std::cout << "number is: " << num << std::endl;
    return 0;
}