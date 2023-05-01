#include <iostream>
using namespace std;
int main(){
    for(int i=65; i <= 90; i++){
        cout << (char)i << " " << (char)(i+32) << "\t";
        if(!(i%4)) cout << endl;
    }
    cout << endl;
    return 0;
}