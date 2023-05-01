#include <iostream>
#include <fstream>
using namespace std;

struct Jumper{
    int number;
    float jump[3];
    bool isQualified(){
        return (jump[0] + jump[1] + jump[2]) / 3 > 1.50;
    }
};

void printJumper(Jumper j){
    cout << "Jumper #" << j.number << ": ";
    for(int i = 0; i < 3; i++)
        cout << j.jump[i] << " ";
    cout << j.isQualified() << endl;
}

float maxAverageJump(Jumper j[], int n){
    float maxAvg = 0;
    for(int i = 0; i < n; i++){
        float avg = (j[i].jump[0] + j[i].jump[1] + j[i].jump[2]) / 3;
        if(avg > maxAvg) maxAvg = avg;
        
    }
    return maxAvg;
}

int main(){
    ifstream fin("input1.txt");
    Jumper j[10];
    int i = 0;
    
    fin >> j[i].number;
    while(j[i].number != 0){
        fin >> j[i].jump[0] >> j[i].jump[1]>> j[i].jump[2];
        i++;
        fin >> j[i].number;
    }

    for(int k = 0; k < i; k++) // Print jumper information
        printJumper(j[k]);
    
    float maxAvg = maxAverageJump(j, i); // Find and print max average jump
    cout << "Max average jump: " << maxAvg << endl;

    return 0;
}
