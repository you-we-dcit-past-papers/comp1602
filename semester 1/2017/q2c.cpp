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

int readFiles(Jumper j[]){
    ifstream fin("input1.txt");
    int i = 0;
    fin >> j[i].number;
    while(j[i].number != 0 && i < 80){
        fin >> j[i].jump[0] >> j[i].jump[1]>> j[i].jump[2];
        i++;
        fin >> j[i].number;
    }
    fin.close();
    return i;
}

void printJumper(Jumper j, ofstream &fout){
    fout << "Jumper #" << j.number << ": ";
    for(int i = 0; i < 3; i++)
        fout << j.jump[i] << " ";
    fout << j.isQualified() << endl;
}

float maxAverageJump(Jumper j[], int n){
    float maxAvg = 0;
    for(int i = 0; i < n; i++){
        float avg = (j[i].jump[0] + j[i].jump[1] + j[i].jump[2]) / 3;
        if(avg > maxAvg) maxAvg = avg;
        
    }
    return maxAvg;
}

void writeJumpers(Jumper j[], int numJumpers){
    ofstream fout("output.txt");
    for(int i = 0; i < numJumpers; i++) 
        printJumper(j[i], fout);
    float maxAvg = maxAverageJump(j, numJumpers); // Find and print max average jump
    fout << "Max average jump: " << maxAvg << endl;
}

int main(){
    Jumper j[80];
    int numJumpers = readFiles(j);
    writeJumpers(j, numJumpers);
    return 0;
}
