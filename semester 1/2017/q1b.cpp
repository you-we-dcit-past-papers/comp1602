#include <iostream>
#include <fstream>

using namespace std;

int main() { // fscanf() isnt needed
    ifstream fin("mode.in");
    ofstream fout("mode.out");
    int freq[10] = {0}, maxFreq = 0, mode, num;

    while (fin >> num) 
        freq[num]++;
    
    for (int i = 1; i <= 9; i++) {
        fout << i << " appears " << freq[i] << " times." << endl;
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mode = i;
        }
    }
    fout << "The mode of the numbers is " << mode << endl;

    fin.close(); fout.close();
    return 0;
}
