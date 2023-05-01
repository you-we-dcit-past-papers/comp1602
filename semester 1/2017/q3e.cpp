#include <iostream>
#include <fstream>

using namespace std;

struct Item {
    int itemNumber;
    int quantityInStock;
    double unitPrice;
};

int main() {
    ifstream fin("items.txt");
    if (!fin) {
        cerr << "Error: Could not open input file." << endl;
        return 1;
    }
    
    ofstream fout("item.bin", ios::binary);
    if (!fout) {
        cerr << "Error: Could not create output file." << endl;
        return 1;
    }
    
    Item item;
    while (fin >> item.itemNumber >> item.quantityInStock >> item.unitPrice)
        fout.write((char*)&item, sizeof(Item));
    
    fin.close();    fout.close();
    return 0;
}
