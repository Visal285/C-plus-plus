#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filename;
    cout << "Enter filename: ";
    cin >> filename;

  
    ofstream outfile(filename);
    if (!outfile) {
        cerr << "Error opening file for writing!\n";
        return 1;
    }

    
    outfile << "Alice 85\n";
    outfile << "Bob 92\n";
    outfile << "Beyonder 78\n";
    

    outfile.close(); 

    
    ifstream infile(filename);
    if (!infile) {
        cerr << "Error opening file for reading!\n";
        return 1;
    }

    string name;
    int score;

    cout << "\nReading from file:\n";
    while (infile >> name >> score) {  
        cout << name << " " << score << endl;
    }

    infile.close();
    return 0;
}
