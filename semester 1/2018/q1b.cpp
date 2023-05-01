#include <iostream>
using namespace std;

int larger(int x, int y){
    return (x > y) ? x : y;
}

int strlen(const char ch[]){
    int i = 0;
    while(ch[i] != '\0')
        i++;
    return i;
}

char toLower(const char ch){
    return (ch >= 'A' && ch <= 'Z')? ch+32: ch;
}

int matching(const char s1[], const char s2[]){
    int c = 0, l = (strlen(s1) > strlen(s2)) ? strlen(s1): strlen(s2);
    for(int i = 0; i < l; i++){
        if(toLower(s1[i]) == toLower(s2[i])){
            cout << s1[i] << " is a matching letter in position " << i << endl;
            c++;
        } 
    }  
    return c;
}

int main() {
    char word1[] = "coat";
    char word2[] = "CATTLE";
    cout << "There are " << matching(word1, word2) << " matching letter/s." << endl;
    return 0;
}